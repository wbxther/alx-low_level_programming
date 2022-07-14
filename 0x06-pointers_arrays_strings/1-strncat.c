#include "main.h"
#include <string.h>

/**
 * _strncat - function to append some
 * @dest: first character
 * @src: second character
 * @n: third character
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
