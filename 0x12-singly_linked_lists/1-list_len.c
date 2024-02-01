#include "lists.h"

/**
 * list_len - calculate the number of element in a linked list_t list
 * @h: the pointer to a linked list list_t
 *
 * Return: the number of element of list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
