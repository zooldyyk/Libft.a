#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*block;

	block = malloc(sizeof(*block));
	if (!block)
		return (NULL);
	block->content = content;
	block->next = NULL;
	return (block);
}
