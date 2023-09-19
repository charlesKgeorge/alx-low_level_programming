#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: No return value
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
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
				_putchar(k + '0');
			}
			else
			{
				_putchar(' ');
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
