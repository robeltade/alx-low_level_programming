#include "main.h"
/**
 * _strcmp - entry point
 * @s1:pointer
 * @s2:pointer
 * Return:always success
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

