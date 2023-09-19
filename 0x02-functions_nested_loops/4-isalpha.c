#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: character to be checked
 *
 * Return: 1 if it is an alphabet
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 66 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
