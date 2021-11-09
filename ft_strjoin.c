/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:52:15 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/09 12:52:27 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;
	int		ls1;
	int		ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	new = (char *) malloc ((ls1 + ls2 + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ls1)
		new[i++] = s1[j++];
	j = 0;
	while (i < (ls1 + ls2))
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
