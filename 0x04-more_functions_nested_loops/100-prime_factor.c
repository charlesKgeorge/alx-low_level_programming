#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Find largest prime factor
 * Return: 0 (Success)
 */
int main(void)
{
	long int A = 612852475143, factor = 1;


	while (A > 1)
	{
		factor++;
		while (A % factor == 0)
		{
			A /= factor;
		}
	}
	printf("%lu\n", factor);

	return (0);
}
