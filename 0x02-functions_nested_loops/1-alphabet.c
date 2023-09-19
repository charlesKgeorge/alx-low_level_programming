#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Description: The alphabet is to be lowercase followed by a new line
 * It does not have a return value
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
