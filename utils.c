/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:47:01 by agraetz           #+#    #+#             */
/*   Updated: 2022/07/12 14:36:15 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char    *detectpath(char *cmd, char **envp);

void    error(void)
{
    perror("\033[31mError");
    exit(EXIT_FAILURE);
}

void    execmd(char *argv, char **envp)
{
    char **cmd;
    char    *path;
    int i;

    i = -1;
    cmd = ft_split(argv, ' ');//split the arguments into separate commands
    path = detectpath(cmd[0], envp);//function to find the right path 
    if (!path)
    {
        while(cmd[++i])
        {
            free(cmd[i]);
        }
        free(cmd);
        error();
    }
    if (execve(path, cmd, envp) == -1)//last check to ensure path and command are all operational
    {
        error();
    }
}

char    *detectpath(char *cmd, char **envp)
{
    char    *allpaths;
    char    *path;
    char    *part;
    int i;

    i = 0;
    while (ft_strnstr(envp[i], "PATH", 4)== 0)//amongst the environmental variables find PATH
    {
        i++;
    }
    allpaths = ft_split(envp[i] + 5, ':');//at the end of PATH,split wherever there is a : to separate possible paths
    i = 0;
    while (allpaths[i])
    {
        part = ft_strjoin(allpaths[i], "/");
        path = ft_strjoin(part, cmd);//set possible path up for testing
        free(part);
        if (access(path, F_OK)== 0) //test that the path is working and that the file exists/canbe accessed
        {
            return (path); //bingo
        }
        free (path);
        i++;//continue testing till access works & the right path is found
    }
    i = -1;
    while (allpaths[++i])
    {
        free(allpaths[i]);
    }
    free(allpaths);//be free
    return(0);
}