/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:21:54 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/04 12:06:13 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char	c, int fd)
{
	write(fd, &c, 1);
}

static void	handle_the_nb(int temp, int size, int last, int fd)
{
	if (temp < 0)
	{
		last *= -1;
		ft_putchar('-', fd);
	}
	temp = last;
	while (temp / 10 > 0)
	{
		size *= 10;
		temp /= 10;
	}
	ft_putchar((last / size) + '0', fd);
	size /= 10;
	while (size >= 1)
	{
		ft_putchar(((last / size) % 10) + '0', fd);
		size /= 10;
	}
}

void ft_putnbr_fd(int n, int fd)
{
	int	size;
	int	temp;
	int	last;

	size = 1;
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		n = 147483648;
	}
	temp = n;
	last = n;
	handle_the_nb(temp, size, last, fd);
}
