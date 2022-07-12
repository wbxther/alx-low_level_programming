#include "main.h"

/**
 * swap_int - swao two variable integers
 * @a: character integer 1
 * @b: character integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
