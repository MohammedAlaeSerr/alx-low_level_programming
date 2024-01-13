#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of program
 *@argc: number of argment
 *@argv: array of argment
 *
 * Return: return an integer 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
