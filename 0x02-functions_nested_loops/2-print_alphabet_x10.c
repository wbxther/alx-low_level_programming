#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets x10
 *
 * Result: void
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
