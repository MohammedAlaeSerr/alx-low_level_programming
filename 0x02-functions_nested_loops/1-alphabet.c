#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: our function return void
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
