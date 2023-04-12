#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc:value
 * @argv:array
 * Return:0
 */

int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;
char *e;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}

