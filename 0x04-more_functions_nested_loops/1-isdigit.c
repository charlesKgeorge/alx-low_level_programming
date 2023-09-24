#include  "main.h"

/**
 * _isdigit - checks for a digit(0 to 9)
 * @c: the digit
 *
 * Return: 1 for digit
 * 0 Otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
