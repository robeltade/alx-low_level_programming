#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - entry function
 * @b: value
 * Return: returns some value
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}

