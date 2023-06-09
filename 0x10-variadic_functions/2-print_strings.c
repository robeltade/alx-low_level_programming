#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - entry point
 * @separator:value
 * @n:value
 * @...:values
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str)
{ printf("%s", str); }
else 
{ printf("(nil)"); }
if (index < n - 1)
 { if (separator)
{printf ("%s", separator); }}
}
printf("\n");
va_end(strings);
}

