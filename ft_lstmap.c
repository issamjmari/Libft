#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	int 	count;
	int		i;

	count = ft_lstsize(lst);
	i = 0;
	if (lst && f && del)
	{
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (!new)
			{
				ft_lstclear(new, del);
				return (0);
			}
			else if (i != 0)
				ft_lstadd_back(&new, new);
			i++;
		}
		return (new);
	}
	return (NULL);
}