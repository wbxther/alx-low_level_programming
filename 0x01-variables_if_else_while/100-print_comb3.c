#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints all possible combos of two different digits.
 * in ascending order, seperated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit2 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			if (digit1 < digit2)
			{
			putchar((digit1));
			putchar((digit2));

			if (digit1 != 8 || (digit1 == 8 && digit2 != 9))
			{
			putchar(',');
			putchar(' ');
			};
			}
			}
			}
			}
			putchar('\n');
			return (0);
			}
