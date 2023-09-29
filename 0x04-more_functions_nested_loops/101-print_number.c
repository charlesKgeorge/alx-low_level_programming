#include "main.h"

/**
 * print_number - Prints numbers to std output
 * @n: the number to be printed
 *
 * Return: No return value
 */
void print_number(int n)
{
	int x = 10;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n >= x)
	{
		x *= 10;
	}
	x /= 10;
	while (x >= 1)
	{
		if (n == 0)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(n / x + '0');
			n -= (n / x) * x;
		}
		x /= 10;
	}
}
