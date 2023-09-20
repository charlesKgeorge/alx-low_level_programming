#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: the number whose last digit is printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = -1 * a;
	}

	_putchar(a + '0');

	return (a);
}
