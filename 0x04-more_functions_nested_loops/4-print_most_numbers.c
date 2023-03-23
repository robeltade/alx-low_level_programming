#include "main.h"
/**
 * print_most_numbers - entry point
 * Return: 0
 */

void print_most_numbers(void)
{
int c;
for (c = 0; c < 10; c++)
{
if (c == 2 && c == 4)
{ continue;
}
Else
{
_putchar(c);
}
}
_putchar('\n');
}

