#include "lists.h"
/**
* list_len - finds the number of elements
* @h: the linked list_t list
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
