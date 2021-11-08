/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:00:47 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/05 15:21:56 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
#include <unistd.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memmove(void *s, const void *t, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *s, const void *t, size_t n);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *s, const char *t, size_t n);
size_t	ft_strlcat(char *s, const char *t, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;
#endif