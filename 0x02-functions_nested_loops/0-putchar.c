#include "main.h"

/**
 * Main - prints _putchar followed by a new line
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
