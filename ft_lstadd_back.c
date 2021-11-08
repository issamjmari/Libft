#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst)
	{
		if (!lst->next)
		{
			lst->next = new;
			new->next = 0;
			break;
		}
		lst = lst->next;
	}
}