#include "main.h"

/**
 * _putchar - Write a program that prints _putchar
 * Followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch[] = "_putchar\n";
	int i;
	
	for (i = 0; i <= 9; i++)
		_putchar(ch[i]);
	return (0);
}
