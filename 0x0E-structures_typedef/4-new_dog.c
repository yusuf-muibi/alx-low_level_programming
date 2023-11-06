#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* _strdup - duplicates a string
* @str: string to duplicate
* Return: pointer to the duplicated string
*/
char *_strdup(char *str)
{
char *dup;
unsigned int t, len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (t = 0; t < len; t++)
dup[t] = str[t];
dup[len] = '\0';
return (dup);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
if (name == NULL || owner == NULL)
return (NULL);
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
my_dog->name = _strdup(name);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = _strdup(owner);
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}
my_dog->age = age;
return (my_dog);
}
