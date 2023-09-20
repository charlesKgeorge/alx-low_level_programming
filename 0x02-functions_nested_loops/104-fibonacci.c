#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 numbers of Fibonacci sequence
 * Return: 0(Success)
 */
int main(void)
{
	int i = 0, a = 0, b = 1;

	for (; i < 97; i++)
	{
		b += a;
		a = b - a;
		printf("%d, ", b);
	}
	printf("%d\n", a + b);
}
