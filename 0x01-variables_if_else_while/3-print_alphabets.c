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
	for (char x = 'a'; x <= 'z'; x++)
		putchar(x);

	x = 'A';
	while (x <= 'Z')
		putchar(x);
	putchar('\n');

	return (0);
}
