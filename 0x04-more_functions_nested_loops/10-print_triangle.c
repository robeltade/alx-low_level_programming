#include "main.h"
/**
 * print_triangle - entry point for the function
 * @size: value
 * Return:0
 */

void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size – x ; y > 1; y--)
{
_putchar(32);
}
for (z = 0; z <= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

