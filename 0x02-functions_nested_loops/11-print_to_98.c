#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: the integer to start from.
 */
void print_to_98(int n)
{
	if ( n >= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i + '0');
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n')
	}
	else
	{
		for (int i = n; i >= 98; i--)
                {
                        if (i == 98)
                        {
                                _putchar(i + '0');
                        }
                        else
                        {
                                _putchar(i + '0');
                                _putchar(' ');
                                _putchar(',');
                        }
                }
                _putchar('\n')
	}
}

