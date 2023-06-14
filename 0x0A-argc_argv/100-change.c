#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry function
 * @argc: value
 * @argv: value
 * Return: 0
 */
int main(int argc, char **argv)
{
int total, count;
unsigned int i;
char *p;
int cents[] = {25, 10, 5, 2};

if (argc != 2)
{
printf("error\n");
return (1);
}
total = strtol(argv[1], &p, 10);
count = 0;
if (!*p)
{
while (total > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
if (total >= cents[i])
{
count += total / cents[i];
total = total % cents[i];
}
}
}
if (total == 1)
{ count++; }
}
else
{
printf("error\n");
return (1);
}
printf("%d\n", count);
return (0);
}

