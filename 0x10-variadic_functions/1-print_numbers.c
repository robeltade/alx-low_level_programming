#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - entry point
 * @separator: value
 * @n:value
 * @...:values
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (separator && index < n - 1)
{
printf("%s", separator);
}}
printf("\n");
va_end(nums);
}

