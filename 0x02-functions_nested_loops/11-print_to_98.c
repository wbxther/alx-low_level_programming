#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: the starting point
 * Return: no return
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++
		}
	}else if (n > 98)
				{
					while (n >= 98)
					{
						if (n == 98)
							printf("%d\n", n);
						else
							printf("%d, ",n);
						n--
					}
				}
			}
