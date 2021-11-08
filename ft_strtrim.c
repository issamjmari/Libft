/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:03:40 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/04 09:03:41 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_stock(char *s1, int stock, int last, char *temp)
{
	int i;

	i = 0;
	while (s1[stock] && i < last)
		temp[i++] = s1[stock++];
	return (temp);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *temp;
    int        i;
    int        len;
    int        stock;
    int        last;

    if (!set[0])
        return ((char *)s1);
    i = 0;
    len = ft_strlen(s1);
    last = len;
    while (is_set(s1[i], set))
        i++;
    stock = i;
    if (i != len)
      while (is_set(s1[--len], set))
        i++;
    last = last - i;
    if (i == len)
        last = 0;
    temp = (char *) malloc (last + 1);
    if (!temp)
        return (0);
    temp = ft_stock((char *)s1, stock, last, temp);
    temp[last] = '\0';
    return (temp);
}
