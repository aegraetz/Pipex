# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anniegraetz <anniegraetz@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 10:10:12 by agraetz           #+#    #+#              #
#    Updated: 2022/07/15 12:30:40 by anniegraetz      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iheader/

SRC = srcs/*.c
LIBFT = libft/libft.a


all:
	$(CC) $(CFLAGS) $(LIBFT) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
