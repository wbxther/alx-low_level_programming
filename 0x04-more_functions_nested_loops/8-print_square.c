#include "main.h"

/**
 * print_square - print square
 * @size: character integers
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		
		}
	}
}
