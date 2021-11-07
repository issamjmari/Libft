# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 14:54:50 by ijmari            #+#    #+#              #
#    Updated: 2021/11/05 20:45:30 by ijmari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_calloc.c  ft_isdigit.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_strrchr.c \
ft_atoi.c ft_isalpha.c ft_memchr.c  ft_memset.c  ft_strlen.c  ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memcmp.c  ft_strdup.c  ft_strncmp.c ft_toupper.c \
ft_split.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strchr.c

OBJ = $(SRC:.c=.o)
HEADER = libft.h
CC = gcc -Wall -Wextra -Werror
NAME = libft.a

all :	$(NAME)

$(NAME) :
	$(CC) -c $(SRC)
	ar rcs $(NAME) $(OBJ)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all run
.PHONY: all clean fclean re

run: all
	gcc -Wall -Wextra -Werror main.c libft.a
