#include "main.h"
/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int z;

	for (z = 97; z < 123; z++)
	{
		_putchar(z);
	}
	_putchar('\n');
}
