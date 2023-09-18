#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digit numbers separated by
 * commas and a space but ending with a new line
 * Return: 0(Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
