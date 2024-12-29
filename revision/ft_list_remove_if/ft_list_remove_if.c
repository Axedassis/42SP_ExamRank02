#include "./ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(void *a, void *b);
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *a, void *b));

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *a, void *b))
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *current = *begin_list;
	t_list *prev = NULL;

	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			t_list *to_free = current;
			if (prev == NULL)
			{
				*begin_list = current->next;
				current = current->next;
			}
			else
			{
				prev->next = current->next;
				current = current->next;
			}
			free(to_free->data);
			free(to_free);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

int cmp(void *a, void *b)
{
	return strcmp((char *)a, (char *)b);
}

void print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *list = malloc(sizeof(t_list));
	list->data = strdup("node1");
	list->next = malloc(sizeof(t_list));
	list->next->data = strdup("node2");
	list->next->next = malloc(sizeof(t_list));
	list->next->next->data = strdup("node3");
	list->next->next->next = NULL;

	printf("Original list:\n");
	print_list(list);

	char *data_ref = "node2";
	ft_list_remove_if(&list, data_ref, cmp);

	printf("List after removal:\n");
	print_list(list);

	// Free remaining nodes
	while (list)
	{
		t_list *tmp = list;
		list = list->next;
		free(tmp->data);
		free(tmp);
	}

	return 0;
}