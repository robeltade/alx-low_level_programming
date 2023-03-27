#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 * @a:pointer
 * @n:value
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}

