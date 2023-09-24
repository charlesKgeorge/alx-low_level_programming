#include "main.h"

/**
 * print_diagonal - Prints \ to make a diagonal line
 * @n: length of the diagonal
 *
 * Return: No return value
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar ('\n');
	}
}
