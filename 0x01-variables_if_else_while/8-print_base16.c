#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints base 16 numbers
 * Return: 0(Success)
 */
int main(void)
{
	int i = 48;
	char j = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');


	return (0);
}
