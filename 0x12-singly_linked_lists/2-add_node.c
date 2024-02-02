#include "lists.h"
#include "stdlib.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to the list_t list
 * @str: String to add in the node
 *
 * Return: the adress of the new element, NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if(!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
