#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by new line
 * @separator: a string to be printed between numbers
 * @n: no of integers passed in function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1;)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

		va_end(ap);
}
