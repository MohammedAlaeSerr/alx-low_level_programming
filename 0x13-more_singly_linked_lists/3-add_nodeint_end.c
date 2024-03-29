#include "lists.h"
#include "stdlib.h"

/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *new_elm = malloc(sizeof(listint_t));

	if (new_elm == NULL || head == NULL)
		return (NULL);

	new_elm->n = n;
	new_elm->next = NULL;
	if (*head == NULL)
	{
		*head = new_elm;
		return (new_elm);
	}

	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new_elm;
	return (new_elm);
}
