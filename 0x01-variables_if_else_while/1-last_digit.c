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
	int n;

	srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is", n);
if (n > 5)
	printf("greater than 5\n", n);
if (n == 0)
	printf("0\n", n);
if (n < 6 && n != 0)
	printf("is less than 6 and not 0\n", n);
return (0);
}
