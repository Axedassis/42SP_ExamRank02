#include "./ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int		elements_number = 0;
	
	if(!begin_list)
		return (0);
	while (begin_list)
	{
		elements_number++;
		begin_list = begin_list->next;
	}
	return (elements_number);
}

