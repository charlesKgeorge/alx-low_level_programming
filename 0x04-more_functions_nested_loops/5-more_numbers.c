#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: No return value
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
