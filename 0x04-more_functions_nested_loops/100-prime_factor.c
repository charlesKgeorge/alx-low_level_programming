#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Find largest prime factor
 * Return: 0 (Success)
 */
int main(void)
{
	long long int A = 612852475143, factor = 1;


	while (A > 1)
	{
		factor++;
		while (A % factor == 0)
		{
			A /= factor;
		}
	}
	printf("%llu", factor);

	return (0);
}
