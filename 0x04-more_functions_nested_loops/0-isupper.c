#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 for Uppercase character
 * 0 Otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
