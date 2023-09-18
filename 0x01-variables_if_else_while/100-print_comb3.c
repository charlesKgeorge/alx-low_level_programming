#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print two digit number combinations
 * in ascending order separated by commas and spaces
 * Return: 0
 */
int main(void)
{
	int i = 48, j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');

	return (0);
}
