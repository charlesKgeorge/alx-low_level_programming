#include "main.h"

/**
 * print_square - Prints a square
 * @size: Square size
 *
 * Return: no return value
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
