#include "main.h"
#include "stdio.h"

/**
 * print_last_digit - prints the last number og a given integer
 * @d: integer
 *
 * Return: the last integer
 */
int print_last_digit(int d)
{
	int last_digit;

	last_digit = d % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
