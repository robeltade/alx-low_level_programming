#include <unistd.h>
/**
* main – write the character c to stdout
* @c: the character to print
* Return: on success 1
* on error: -1
*/
Int _putchar(void)
{
return (write(1,&c,1));
}

