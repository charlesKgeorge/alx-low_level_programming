#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 numbers of Fibonacci sequence
 * Return: 0(Success)
 */
int main(void)
{
	int a = 0, b = 1, sum = 0;

	while (b <= 4000000)
	{
		b += a;
		a = b - a;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
}
