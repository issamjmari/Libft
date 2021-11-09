/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:57:51 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/09 14:00:09 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		if (!(*lst)->next)
		{
			(*lst)->next = new;
			new->next = 0;
			return ;
		}
		(*lst) = (*lst)->next;
	}
	if (!(*lst))
		*lst = new;
}
