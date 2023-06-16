#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 101; z < 127; z++)
	{
		if (z != 106 && z != 118)
		{
			putchar(z);
		}
	}
	putchar('\n');
	return (0);
}
