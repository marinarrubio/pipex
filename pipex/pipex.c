/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:09:52 by marubio-          #+#    #+#             */
/*   Updated: 2023/10/19 13:09:01 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	run_command(char *cmd, char **envp)
{
	char	**cmds;
	char	*path;

	cmds = ft_split(cmd, ' ');
	if ((cmd[0] == '.' && cmd[1] == '/') || cmd[0] == '/')
	{
		if (access(cmd, F_OK & X_OK) == 0)
			path = cmd;
		else
			ft_perror(cmd);
	}
	else
		path = get_path_from_envp(*cmds, envp);
	execve(path, cmds, envp);
}

void	child_process(int *fd, char **av, char **envp)
{
	int	fd_child;

	close(fd[0]);
	fd_child = open(av[1], O_RDONLY, 0644);
	if (fd_child == -1)
		ft_perror(NULL);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	dup2(fd_child, STDIN_FILENO);
	close(fd_child);
	run_command(av[2], envp);
}

void	child2_process(int *fd, char **av, char **envp)
{
	int	fd_parent;

	close(fd[1]);
	fd_parent = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_parent == -1)
		ft_perror(NULL);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	dup2(fd_parent, STDOUT_FILENO);
	close(fd_parent);
	run_command(av[3], envp);
}

int	main(int ac, char **av, char **envp)
{
	int		pipefd[2];
	pid_t	child1;
	pid_t	child2;

	if (ac != 5)
		return (0);
	if (pipe(pipefd) == -1)
		perror("error");
	child1 = fork();
	if (child1 < 0)
		perror("Fork: ");
	if (child1 == 0)
		child_process(pipefd, av, envp);
	child2 = fork();
	if (child2 < 0)
		perror("Fork: ");
	if (child2 == 0)
		child2_process(pipefd, av, envp);
	close(pipefd[0]);
	close(pipefd[1]);
	waitpid(child1, NULL, 0);
	waitpid(child2, NULL, 0);
	return (0);
}
