#include "main.h"

/**
 * print_number - Prints numbers to std output
 * @n: the number to be printed
 *
 * Return: No return value
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i *= -1;
		_putchar('-');
	}

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
