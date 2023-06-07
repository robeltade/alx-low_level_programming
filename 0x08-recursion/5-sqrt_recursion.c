#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt - inner function
 * @n:value
 * @i:value
 */
#include "main.h"
/**
 * _sqrt_recursion - main function
 * @n:value
 * return:always 0
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
 return (-1);
if (sqrt == n)
 return (i);
return (_sqrt(n, i + 1));
}

