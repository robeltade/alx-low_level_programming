#include "main.h"
/**
 *_islower - entry point
 * Return: 1 if it is correct or 0 for error
 * @c: variable to be computed
 */
int _islower(int c)
{
if (c >= 97 && c < 122)
{
return (1);
}
return (0);
}

