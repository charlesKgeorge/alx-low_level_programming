#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints three digit combos
 * Return: 0
 */
int main(void)
{
	int i = 48, j = 48, k = 48;

        while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				if (i != j && i != k && j != k && i < j && i < k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');

	return (0);
}
