#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description: th alphabet is printed in lowercase follwed by a new line
 * after eache print
 * Return: It has no return value
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
