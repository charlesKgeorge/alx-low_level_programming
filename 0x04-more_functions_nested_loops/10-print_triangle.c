#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: the triangle size
 *
 * Return: No return value
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		j = size - (i + 1);
		for (; j > 0; j--)
		{
			_putchar(' ');
		}
		
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
