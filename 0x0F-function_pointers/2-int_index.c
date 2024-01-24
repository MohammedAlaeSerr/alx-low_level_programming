#include "function_pointers.h"

/**
  * int_index - undex
  * @array: array
  * @size: is the number of elements in the array
  * @cmp:  is a pointer to the function to compare values
  *
  * Return: returns the index of the first element 
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
