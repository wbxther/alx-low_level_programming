#include "main.h"

/**
 * main - Emtry point
 * Description: primts the alphabets in lowercase
 * Return: Always 0. (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
