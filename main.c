
#include "libft.h"

int	main(void)
{
	t_list *m;
	t_list *n;

	m = ft_lstnew("OK");
	n = ft_lstnew("YES");
	ft_lstadd_back(&m, n);
	ft_lstmap();
	return (0);
}