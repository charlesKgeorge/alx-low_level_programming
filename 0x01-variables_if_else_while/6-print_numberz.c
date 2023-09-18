#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
