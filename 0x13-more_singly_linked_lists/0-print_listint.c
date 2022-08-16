#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - to print the data and return number of nodes
 * @h - head pointer
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

		while (ptr != NULL)
		{
			count++;

			printf ("%d", ptr->n);
			ptr = ptr->next;
		}
	return (count);
}
