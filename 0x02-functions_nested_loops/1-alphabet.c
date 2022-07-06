#include "main.h"

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0. (Success)
 */
void print_alphabet_(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
