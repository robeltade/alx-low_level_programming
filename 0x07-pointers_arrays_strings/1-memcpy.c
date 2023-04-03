#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: char pointer
 * @src: pointer
 * @n: value
 * Return: always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

