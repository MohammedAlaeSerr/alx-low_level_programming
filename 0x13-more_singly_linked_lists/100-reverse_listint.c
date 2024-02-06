#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the root elm of the listint_t.
 *
 * Return: a pointer to the root elm.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t next;
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
