#include "main.h"

/**
 * _putchar - prints _putchar
 * @_putchar: the character to print
 * Return: Always 0.
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
