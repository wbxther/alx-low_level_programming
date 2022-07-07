#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c : integer representation
 *
 * Return: 1 (Success) otherwise 0
 */
int _isupper(int c);
{
	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
		return (0);
}
