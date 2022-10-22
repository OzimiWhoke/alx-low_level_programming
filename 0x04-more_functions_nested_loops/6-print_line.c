#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
