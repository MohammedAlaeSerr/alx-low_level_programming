#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: array of argument
 *
 * Return: always return 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int res;

	res = argc - 1;
	printf("%d\n", res);
	return (0);
}
