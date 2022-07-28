/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniegraetz <anniegraetz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:50:06 by anniegraetz       #+#    #+#             */
/*   Updated: 2022/07/22 11:52:03 by anniegraetz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	childproc(char **argv, char **envp, int *fd);
void	parentproc(char **argv, char **envp, int *fd);

int	main(int argc, char **argv, char **envp)
{
	pid_t	pid1; //process ID, check man for waitpid
	int		fd[2];//fd[0]read end & fd[1] write end of the pipe

	if (argc == 5)//this function requires that there be 5 arguments
	{
		if (pipe(fd) == -1)
			error();
		pid1 = fork(); //processes must be dealt with separately, simultaneously
		if (pid1 == -1)
			error(); //check that the fork worked
		if (pid1 == 0)//identify the child process created with the fork (always has an ID of 0)
		{
			childproc(argv, envp, fd);
		}
		waitpid(pid1, NULL, 0); //wait until child process is done in order to continue with the parent process
		parentproc(argv, envp, fd); //parent process is a go
	}
	else
	{
		ft_putstr_fd("\033[31mError: required num of args is 5.\n\e[0m", 2);
	}
	return (0);
}

void	childproc(char **argv, char **envp, int *fd)
{
	int	file1;

	file1 = open(argv[1], O_RDONLY);//open and read file1
	if (file1 == -1)
	{
		printf("no file\n");
		error();
	}
	dup2(file1, STDIN_FILENO);//copies contents of file1 into input
	dup2(fd[1], STDOUT_FILENO);//redirects outputs to the write end of the pipe
	close(fd[0]);
	execmd(argv[2], envp);//function to execute commands
}

void	parentproc(char **argv, char **envp, int *fd)
{
	int	file2;

	file2 = open(argv[4], O_WRONLY |
			O_CREAT | O_TRUNC, 0644);//create or open file2 ready to be read and written to and if there is already something in it, write over it
	if (file2 == -1)
		error();
	dup2(fd[0], STDIN_FILENO);//inputs are sent to the read end of the pipe
	dup2(file2, STDOUT_FILENO);//outputs are written to file2
	close(fd[1]);
	execmd(argv[3], envp);//function to execute commands
}
