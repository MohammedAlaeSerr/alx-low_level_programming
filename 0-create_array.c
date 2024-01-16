#include "stdlib"
#include "main.h"

/**
 * create_array - creates and initializes an array of
 * chars with a specific value.
 * @size: size of the array.
 * @c: the value to initialize our char array.
 *
 * Return: a pointer too the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
