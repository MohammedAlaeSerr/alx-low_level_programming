#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: my function return a void.
 */
void print_alphabet_x10(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		char i;

		i = 'a';
		for (; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		j++;
	}

}
