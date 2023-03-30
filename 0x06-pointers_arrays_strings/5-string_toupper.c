#include "main.h"
/**
 * *string_toupper - entry point
 * @str:pointer
 * Return: always success
 */

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}

