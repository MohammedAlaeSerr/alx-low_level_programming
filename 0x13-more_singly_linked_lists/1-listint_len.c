#include "lists.h"
#include "stdio.h"

/**
 * listint_len - the number of elements in a linked list.
 * @h: head pointer
 *
 * Return: the number of elms of the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
