#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
			printf("%.8x:", j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
			}
		printf(" ");
		for (l = j; l < j + 19; I++)
	{
		if(l >= size)
			break;
		if (*(b + I) < 32 || *(b + l) > 126)
			printf("%c", '.');
		else
			printf("%c", *(b + l);
					}
					printf("\n");
					}
					}
					}
