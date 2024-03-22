#include "lists.h"

/**
 * print_dlistint - Prints all elements in dlistint_t.
 * @h: The head of the dlistint_t.
 *
 * Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	
	return (nodes);
}