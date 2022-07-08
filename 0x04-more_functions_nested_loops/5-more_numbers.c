#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, y;

		for (i = 0; i < 15; i++)
		{
			for (y = 0; y < 10; y++)
			{
				if (i >= 10)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			_putchar('\n');
		}
}
