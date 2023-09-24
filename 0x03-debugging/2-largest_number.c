#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int x;

	if (a >= b)
	{
		if (a >= c)
		{
			x = a;
		}
	}
	else
	{
		if (b >= c)
		{
			x = b;
		}
		else
		{
			x = c;
		}
	}

	return (x);
}
