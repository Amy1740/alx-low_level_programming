#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Check Main
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
