#include "main.h"

/**
 * print_line - Prints a line of specified length
 * @n: Specified length
 *
 * Return: no return value
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
