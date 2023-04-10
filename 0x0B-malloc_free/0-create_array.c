#include "main.h"
/**
 * *create_array - entry point
 * @size:value
 * @c:value
 * Return:always success
 */

char *create_array(unsigned int size, char c)
{
unsignend int i;
char *s;
if (size == 0)
{
return (NULL);
}
s = malloc(size * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
}

