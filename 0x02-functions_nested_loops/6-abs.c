#include "main.h"

/**
 * _abs - Compute absolute value of an integer
 * @n: the integer whose absolute value is to be determined
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	int a;

	if (n => 0)
	{
		a = n;
	}
	else
	{
		a = -1 * n;
	}
	return (a);
}

