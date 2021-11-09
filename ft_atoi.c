/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:06:17 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/09 19:57:04 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if ((c == 32 || c == '\r'
			|| c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			negative;
	long		temp;

	i = 0;
	negative = 0;
	temp = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		if (temp > 2147483647 && !negative)
			return (-1);
		else if (temp < -2147483648 && negative)
			return (0);
		temp = (str[i] - 48) + (temp * 10);
		i++;
	}
	if (negative == 1)
		temp *= -1;
	return (temp);
}
