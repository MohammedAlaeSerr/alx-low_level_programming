#include "main.h"
#include "stdlib.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the root elm of the listint_t.
 *
 * Return: a pointer to the root elm.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	while (curr != NULL)
	{
		listint_t next = curr->next;

		curr->next = prev;

		prev = curr;
		curr = next;
	}

	*head = prev;

	return (*head);
}
