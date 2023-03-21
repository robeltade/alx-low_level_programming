#include "main.h"
void print_alphabet_x10(void);
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
char c;
int i;
 for (i = 0; i <= 10; i++)
 {     _putchar('\n');
 
      for (c = 'a'; c <= 'z'; c++)
              _putchar(c);
 }
}

