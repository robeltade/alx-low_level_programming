#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - entry point
 * @a:pointer
 * @size:value
 */

void print_diagsums(int *a, int size)
{
int i, n, sum1 = 0, sum = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];
for (n = size – 1; n <= (size * size) – size; n = n + size - 1)
sum = sum + a[n];
printf("%d, &d\n", sum1, sum);
}

