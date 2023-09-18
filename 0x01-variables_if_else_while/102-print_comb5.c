#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints two two digit combos
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 100)
	{
		while (j < 100)
		{
			if (i != j && i < j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');

	return (0);
}
