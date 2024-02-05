#include "lists.h"

/**
 * print_listint - the number of elements in a linked list.
 * @h: head pointer
 *
 * Return: the number of elms of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
