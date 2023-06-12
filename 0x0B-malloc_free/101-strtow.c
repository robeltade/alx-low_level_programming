#include <stdlib.h>
#include "main.h"
/**
 * atrtow - entry point
 * @str: value
 * Return: returns char value
 */
char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letter, l;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
words = count_words(str);
if (words == 0)
{
return (NULL);
}
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
{
return (NULL);
}
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
{
index++;
}
letter = word_len(str + index); 
strings[w] = malloc(sizeof(char) * (letter + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
{
free(strings[w]);
}
free(strings);
return (NULL);
}
for (l = 0; l < letter; l++)
{
strings[w][l] = str[index++];
}
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}

