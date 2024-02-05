#include "lists.h"
#include "stdlib.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list.
 * @head: double pointer to the root item in the linked list.
 * @n: the integer values of the new element.
 *
 * Return: the adress of the new elm or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *new_elm = malloc(sizeof(listint_t));

	if (new_elm == NULL)
		return (NULL);

	new_elm->n = n;
	new_el->next = NULL;
	if (head == NULL)
	{
		*head = new_elm;
		return (new_elm);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new_elm;
	return (new_elm);
}
