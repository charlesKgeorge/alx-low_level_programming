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
	long int a = 0, b = 1;

	for (; i < 49; i++)
	{
		b += a;
		a = b - a;
		printf("%lu, ", b);
	}
	printf("%lu\n", a + b);

	return (0);
}
