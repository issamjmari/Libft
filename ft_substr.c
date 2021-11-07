/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:38:37 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/04 09:38:38 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	while (i < len)
		temp[i++] = s[start++];
	temp[i] = '\0';
	return (temp);
}
