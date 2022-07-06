#include "main.h"

/**
 * _isalpha - prints 1 if input is letter
 *
 * @c: character in ASCII code
 *
 * Return: 1 for letters. 0 otherwise
 */
int_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n);
}
