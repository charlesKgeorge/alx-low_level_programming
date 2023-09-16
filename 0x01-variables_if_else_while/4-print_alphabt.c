#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase alphabets
 * except q and e
 * Return: 0(Success)
 */
int main(void)
{
	for (char x = 'a'; x <= 'z'; x++)
		if (x != 'e' && x != 'q')
			putchar(x);
	putchar('\n');

	return (0);
}
