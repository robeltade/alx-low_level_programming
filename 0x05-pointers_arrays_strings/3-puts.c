#include "main.h"
/**
 * _puts - entry point
 * @str: variable
 */
void _puts(char *str)
{
for (; *str != '\n'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

