#include "main.h"

/**
 * print_times_table - Prints times table for n
 * @n: the value of the times table
 *
 * Return: No return value
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		i = 0;
		while (i < (n + 1))
		{
			j = 0;
			while (j < (n + 1))
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				if (j == 9)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
				}
				j++;
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
