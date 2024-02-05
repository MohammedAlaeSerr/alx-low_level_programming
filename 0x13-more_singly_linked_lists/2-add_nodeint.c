#include "lists.h"
#include "stdlib.h"

/**
 * add_nodeint - adds new node at the beginning of listint_t list.
 * @head: the adress of root element in the list.
 * @n: integer to add in the list.
 *
 * Return: the new element, NULL if it failled
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elm = malloc(sizeof(listint_t));

	if (new_elm == NULL || head == NULL)
		return (NULL);

	new_elm->n = n;
	new_elm->next = *head;
	*head = new_elm;

	return (new_elm);
}
