#include "main.h"

/**
 *  _islower - checks for lowercase character.
 *  @c: char to be checked
 *
 *  Return: return 1 if c is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
