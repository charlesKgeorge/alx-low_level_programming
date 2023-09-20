#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints sum of all multiples of 3
 * and 5 below 1024
 * Return: 0 (Succcess)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
		else if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
