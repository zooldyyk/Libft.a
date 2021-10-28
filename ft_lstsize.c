#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*block;

	i = 0;
	block = lst;
	while (block != NULL)
	{
		block = block->next;
		i++;
	}
	return (i);
}
