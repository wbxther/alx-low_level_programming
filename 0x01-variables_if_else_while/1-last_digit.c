#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints "This program will assign a random number to the variable n,
 * each time it is excuted.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n, l);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n, l);
	}
	printf("Last digit of %d is", n, l);
	return (0);
}
