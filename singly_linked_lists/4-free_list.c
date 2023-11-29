#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list
* @head: a pointer to the list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
