#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase followed
 * by the alphabet in uppercase
 * Return: 0(Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
