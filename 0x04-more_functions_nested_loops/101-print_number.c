#include "main.h"
#include <limits.h>

/**
 * print_number - Prints numbers to std output
 * @n: the number to be printed
 *
 * Return: No return value
 */
void print_number(int n)
{
	int x = 10, j = 0;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			n++;
			j = 1;
		}
		n *= -1;
		_putchar('-');
	}
	while (n / 10 >= x)
	{
		x *= 10;
	}
	while (x >= 1)
	{
		if (n == 0)
		{
			_putchar('0');
		}
		else
		{
			if(x == 1)
			{
				n += j;
			}
			_putchar(n / x + '0');
			n -= (n / x) * x;
		}
		x /= 10;
	}
}
