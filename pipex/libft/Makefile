# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anniegraetz <anniegraetz@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 15:35:43 by anniegraetz       #+#    #+#              #
#    Updated: 2022/07/15 10:03:34 by anniegraetz      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I../header/


SRCS = ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
 		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
 		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstadd_back.c \
				 ft_lstadd_front.c \
				 ft_lstclear.c \
				 ft_lstdelone.c \
				 ft_lstiter.c \
				 ft_lstlast.c \
				 ft_lstmap.c \
				 ft_lstnew.c \
				 ft_lstsize.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(BONUS_OBJS): $(BONUS_SRCS)
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME):
	$(CC) $(CFLAGS) -I . -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:
	$(CC) $(CFLAGS) -I . -c $(SRCS) $(BONUS_SRCS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

extra:
	$(CC) $(CFLAGS) -I . -c $(SRCS) $(BONUS_SRCS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

clean:
	-rm $(OBJS) $(BONUS_OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus