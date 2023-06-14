#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: value
 * @argv: value
 * Return:0
 */
int main(int argc, char **argv)
{
int i, n, sum = 0;
char *flag;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; argv[i];i++)
{
n = strtol(argv[i], &flag, 10); 
if (*flag)
{
printf ("error\n");
return (1);
}
else
{
sum += n;
}
}
printf("%d\n", sum);
return (0);
}

