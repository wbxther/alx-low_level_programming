#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - to print the data and return number of nodes
 * @h: head pointer
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			count++;

			printf("%d", h->n);
			h = h->next;
		}
	return (count);
}
