#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * *new_dog - entry point
 * @name:value
 * @age:value
 * @owner:value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *max_dog;
int name_l 0, own_l = 0;
if (name != NUll && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
max_dog = malloc(sizeof(dog_t));
if (max_dog == NULL)
{
return (NULL);
}
max_dog->name = malloc(sizeof(char) * name_l);
if (max_dog->name == NULL)
{
free(max_dog);
return (NULL);
}
max_dog->owner = malloc(sizeof(char) * own_l);
if (max_dog->owner == NULL)
{
free(max_dog->name);
free(max_dog);
return (NULL);
}
max_dog->name = _strcpy(max_dog->name, name);
max_dog->name = _strcpy(max_dog->owner, owner);
max_dog->age = age;
}
return (max_dog);
}
/**
 * _strlen - entry point
 * @s:value
 * Return:0
 */
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 * *_strcpy - entry point
 * @dest:value
 * @src:value
 *Return:always success
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

