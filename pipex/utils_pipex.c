/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pipex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:46:08 by marubio-          #+#    #+#             */
/*   Updated: 2023/10/19 12:50:19 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

//usar en los casos necesarios whicherror
void	ft_perror(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

void	ft_which_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
}

int	check_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			return (i);
		i++;
	}
	ft_which_error("There is no PATH defined in the enviroment\n");
	exit (127);
	return (i);
}

char	*get_path_from_envp(char *cmd, char **envp)
{
	int		i;
	char	**path;
	char	*create_path;
	char	*path_cmd;

	i = check_path(envp);
	if (!envp || !*envp)
		ft_perror(NULL);
	path = ft_split(envp[i] + 5, ':');
	if (!path || !*path)
		ft_perror(NULL);
	i = 0;
	while (path[i])
	{
		create_path = ft_strjoin(path[i], "/");
		path_cmd = ft_strjoin(create_path, cmd);
		free(create_path);
		if (access(path_cmd, F_OK & R_OK) == 0)
			return (path_cmd);
		free(path_cmd);
		i++;
	}
	return (0);
}
