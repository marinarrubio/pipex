/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:10:00 by marubio-          #+#    #+#             */
/*   Updated: 2023/10/19 12:21:20 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

/*utils_pipex*/
void	ft_perror(char *str);
void	ft_which_error(char *str);
int		check_path(char **envp);
char	*get_path_from_envp(char *cmd, char **envp);

/*pipex*/
void	run_command(char *cmd, char **envp);
void	child_process(int *fd, char **av, char **envp);
void	child2_process(int *fd, char **av, char **envp);
int		main(int ac, char **av, char **envp);

#endif