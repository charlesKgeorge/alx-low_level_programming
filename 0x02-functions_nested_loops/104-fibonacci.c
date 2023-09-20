#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 numbers of Fibonacci sequence
 * Return: 0(Success)
 */
int main(void)
{
	int i = 0;
	unsigned long long int a = 0, b = 1;
	unsigned long int a1, a2, b1, b2, c1, c2;

	for (; i < 97; i++)
	{
		if (a < 10000000000)
		{
			b += a;
			a = b - a;
			printf("%llu, ", b);
		}
		else
		{
			a1 = a / 10000000000;
			a2 = a % 10000000000;
			b1 = b / 10000000000;
			b2 = b % 10000000000;

			b2 += a2;
			if (b2 > 9999999999)
			{
				b1 += b2 / 10000000000;
				b2 %= 10000000000;
			}
			b1 += a1;

			a2 = b2 - a2;
			if (a2 < 0)
			{
				a2 += 10000000000;
				b1 -= 1;
				a1 = b1 - a1;
				b1 += 1;
			}
			else
			{
				a1 = b1 - a1;
			}
			printf("%lu%lu, ", b1, b2);
		}
	}
	c2 = a2 + b2;
	if (c2 > 10000000000)
	{
		c2 %= 10000000000;
		c1 = 1 + a1 + b1;
	}
	else
	{
		c1 = a1 + b1;
	}
	printf("%lu%lu\n", c1, c2);

	return (0);
}
