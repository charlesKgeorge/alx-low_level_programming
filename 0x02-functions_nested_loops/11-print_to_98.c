#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints digits from n to 98 in order
 * @n: the starting digit for the range
 *
 * Return: No return value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
