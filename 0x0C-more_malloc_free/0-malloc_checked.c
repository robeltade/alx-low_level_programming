#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - entry point
 * @b: value
 * Return: always success
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

