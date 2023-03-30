#include "main.h"
/**
 * *rot13 - entry point
 * @s: pointer
 * Return:always success
 */

char *rot13(char *s)
{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
/*char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";*/
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data1[j])
{
s[i] = data1[j];
break;
}
}
}
return (s);
}

