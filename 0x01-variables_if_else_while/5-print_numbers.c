#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digits of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
