#include <stdio.h>
#include "variadic_function.h"

/**
 * prints_strings - functions that prints strings
 * @separator: string to be printed betw strings
 * @n: no of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sptr = va_arg(valist, char *);
		if (sptr)
			printf("%s", sptr);
		else
			printf("('nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
