/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:04:00 by anniegraetz       #+#    #+#             */
/*   Updated: 2022/07/14 11:22:23 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "libft.h"

void	childproc(char **argv, char **envp, int *fd);
void	parentproc(char **argv, char **envp, int *fd);
char	*detectpath(char *cmd, char **envp);
void	error(void);
void	execmd(char *argv, char **envp);
char	*detectpath(char *cmd, char **envp);

#endif 