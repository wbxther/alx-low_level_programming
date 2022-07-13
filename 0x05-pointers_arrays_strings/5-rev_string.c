#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter s
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, n;
	char c;

	for (len = 0; s[len] != '\0'; len++)
	i = 0;
	n = len / 2;

	while (n--)
	{
		c = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = c;
		i++;
	}
}
