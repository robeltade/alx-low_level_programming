#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s:value
 * Return:0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}}
/**
 * comparator - comparas the numbers
 * @s:value
 * @n1:value 1
 * @n2:value 2
 * Return:0
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
{
return (1);
}
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome - the palindrom function
 * @s: value
 * Return:0
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (comparator(s, 0, _strlen_recursion(s) - 1));}
