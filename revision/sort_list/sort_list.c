#include "./sort_list.h"
#include <stdlib.h>
#include <stdio.h>

int		list_size(t_list *lst)
{
	int		size = 0;
	
	while(lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list		*head = lst;
	t_list		*crr;
	int			l_size = list_size(head);
	int		i = 0;
	int		j = 0;


	while(i < l_size)
	{
		crr = lst;
		j = 0;
		while(j < i)
		{
			crr = crr->next;
			j++;
		}
		while(crr && crr->next)
		{
			if(cmp(crr->data, crr->next->data) != 0)
			{
				int		tmp = crr->next->data;
				crr->next->data = crr->data;
				crr->data = tmp;
			}

			crr = crr->next;
		}
		i++;
	}
	return (head);
}



t_list	*create_node(int value)
{
	t_list *node = (t_list *)malloc(sizeof(t_list) * 1);
	node->data = value;
	node->next = (void *)0;
	return (node);
}

int ascending(int a, int b)
{
	return (a <= b);
}


int main(void)
{
	t_list *node1 = create_node(5);
	t_list *node2 = create_node(2);
	t_list *node3 = create_node(1);
	t_list *node4 = create_node(8);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	sort_list(node1, ascending);
	
	t_list *head = node1;
	t_list *previous;
	while(head)
	{
		previous = head;
		printf("Value: %d\n", head->data);
		head = head->next;
		free(previous);
	}
	return (0);
}