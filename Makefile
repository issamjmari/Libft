# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 14:54:50 by ijmari            #+#    #+#              #
#    Updated: 2021/11/11 15:58:36 by ijmari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_calloc.c  ft_isdigit.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_strrchr.c \
ft_atoi.c ft_isalpha.c ft_memchr.c  ft_memset.c  ft_strlen.c  ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memcmp.c  ft_strdup.c  ft_strncmp.c ft_toupper.c \
ft_split.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strchr.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
B_OBJ = $(BONUS:.c=.o)
HEADER = libft.h
CC = gcc -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f

all :	$(NAME)

$(NAME) :
	$(CC) -c $(SRC)
	ar rcs $(NAME) $(OBJ)
clean :
	$(RM) $(OBJ)
	$(RM) $(B_OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all bonus
bonus :
	$(CC) -c $(BONUS)
	ar rcs $(NAME) $(B_OBJ)
.PHONY : all clean fclean re

# run: all
# 	gcc -Wall -Wextra -Werror main.c libft.a
