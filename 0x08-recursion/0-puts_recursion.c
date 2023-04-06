#include "main.h"
/**
 * _puts_recursion - entry point
 * @s:value
 * Return: always success
 */

void _puts_recursion(char *s)
{
if (*s == ‘\0’)
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}

