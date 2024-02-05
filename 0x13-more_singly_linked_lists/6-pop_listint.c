#include "lists.h"
#include "stdlib.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to the root item.
 *
 * Return: an integer || 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *root;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	root = *head;
	*head = root->next;
	n = root->n;
	free(root);
	return (n);
}
