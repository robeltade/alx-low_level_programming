#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);
/**
 * is_prime_number - main function
 * @n:value
 * return:always 0
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 * chech_prime - function that recurse
 * @n:value
 * @i:value
 * return:always 0
 */
int check_prime(int n, int i)
{
if (n <= 1)
 return (0);
if (n % i == 0 && n > i)
 return (0);
if ((n / i) < i)
 return (1);
return (check_prime(n, i + 1));
}

