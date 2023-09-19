#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: the number whose last digit is printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}

	_putchar(n % 10 + '0');

	return (n % 10);
}
