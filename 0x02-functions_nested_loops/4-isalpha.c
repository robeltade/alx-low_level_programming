#include "main.h"
/**
 * _isalpha - entry point
 * @c: value to be computed
 * Return: 1 for success or 0 for error
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

