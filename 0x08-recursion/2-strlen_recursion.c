#include "main.h"
/**
 * _strlen_recursion - main function
 * @s: value
 * return: always 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return(0);
}
s++;
return (_strlen_recursion(s) + 1);
}

