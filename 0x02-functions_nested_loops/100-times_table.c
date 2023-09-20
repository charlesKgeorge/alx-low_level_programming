#include "main.h"

/**
 * print_times_table - Prints times table for n
 * @n: the value of the times table
 *
 * Return: No return value
 */
void print_times_table(int n)
{
	int i = 0, j, k;

	while (i < (n + 1) && n <= 15 && n >= 0)
	{
		j = 0;
		while (j < (n + 1))
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(k / 10 + '0');
				}
				else
				{
					_putchar(k / 100 + '0');
					_putchar(k % 100 / 10  + '0');
				}
			}
			_putchar(k % 10 + '0');
			if (j != n)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
