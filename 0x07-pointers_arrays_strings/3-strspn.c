#include "main.h"
/**
 * _strspn - entry point
 * @s:pointer
 * @accept:value
 * Return:always success
 */

unsigned int _strspn(char *s, char *accept)
{
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
r++;
break;
}
else if (accept[r + 1] == '\0')
return (r);
}
s++;
}
return (r);
}

