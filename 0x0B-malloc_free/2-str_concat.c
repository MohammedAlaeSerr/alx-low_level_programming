#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1, len_s2, len;
	char *concat;

	len_s1 = len_s2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len_s1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len_s2++;
	}

	len = len_s1 + len_s2 + 1;
	concat = (char *)malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len_s2; j++, i++)
		concat[i] = s2[j];
	concat[len] = '\0';

	return (concat);
}
