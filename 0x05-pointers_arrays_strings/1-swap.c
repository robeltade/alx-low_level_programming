#include "main.h"
/**
 * swap_int - entry point
 * @a:value
 * @b:value
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

