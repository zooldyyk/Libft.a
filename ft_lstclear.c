
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*block;

	if (lst)
	{
		while (*lst)
		{
			block = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = block;
		}
	}
}
