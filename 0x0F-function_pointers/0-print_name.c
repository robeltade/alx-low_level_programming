#include "function_pointers.h"
/**
 * print_name - entry point
 * @f:value
 * name: value
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

