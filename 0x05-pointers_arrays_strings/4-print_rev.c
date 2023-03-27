#include "main.h"
/**
 * print_rev - entry point
 * @s:pointer
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\n')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

