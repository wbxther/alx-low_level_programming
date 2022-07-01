#include <unistd.h>
/**
 * main - entry point
 * Return: 1
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-10\n";

	write(2, quot, 59);
	return (1);
}
