#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints first 50 numbers of Fibonacci sequence
 *     * Return: 0(Success)
 *      */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, x = 1000000000, y = 1000000;
	long int a1, a11, a12, a2, b1, b11, b12, b2;
	for (; i < 45; i++)
	{
		b += a;
		a = b - a;
		printf("%lu, ", b);
	}

    	a1 = a / x;
	a2 = a % x;
	b1 = b / x;
	b2 = b % x;

	for (; i < 88; i++)
	{
		b2 += a2;
		if (b2 > x - 1)
		{
			b1 += b2 / x;
			b2 %= x; 
		}
		b1 += a1;

	
		a2 = b2 - a2;
		if (a2 < 0)
		{
			a2 += x;
			a1 = b1 - 1 - a1;
		}
		else
		{
			a1 = b1 - a1;
		}
		printf("%lu%09lu, ", b1, b2);
	}

	a11 = a1 / y;
	a12 = a1 % y;
	b11 = b1 / y;
	b12 = b1 % y;

	for (; i < 98; i++)
	{
		b2 += a2;
		if (b2 > x - 1)
		{
			b12 += b2 / x;
			b2 %= x; 
		}
		b12 += a12;
		if (b12 > y - 1)
		{
			b11 += b12 / y;
			b12 %= y; 
		}
		b11 += a11;

		a2 = b2 - a2;
		if (a2 < 0)
		{
			a2 += x;
			a12 = b12 - 1 - a12;
		}
		else
		{
			a12 = b12 - a12;
		}
		if (a12 < 0)
		{
			a12 += y;
			a11 = b11 - 1 - a11;
		}
		else
		{
			a11 = b11 - a11;
		}
		printf("%lu%06lu%09lu", b11, b12, b2);
		(i != 97) ? printf(", ") : printf("\n");

	}

	return (0);
}
