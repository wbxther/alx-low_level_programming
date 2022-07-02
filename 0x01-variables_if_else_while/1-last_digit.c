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
printf("Last digit of %d is", n);
if (n > 5)
	printf("%d and is greater than 5");
if (n == 0)
	printf("%d and is 0");
if (n < 6 && n != 0)
	printf("%d and is less than 6 and not 0");
printf("\n");
return (0);
}
