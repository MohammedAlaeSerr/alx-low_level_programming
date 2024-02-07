#include "main.h"
#include "stdlib.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: pointer to the new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_str = (char *)ptr;
	void *new_ptr;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		(char *)new_ptr[i] = new_str[i];
	}

	free(ptr);

	return (new_ptr);
}
