#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - main function
 * @n: value
 * @i: value
 * Return:always success
 */

int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - entry funstion
 * @n:value
 * @i: value
 * Return: 0
 */

int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
{
return (-1);
}
if (sqrt == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}

