#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	for (char x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
