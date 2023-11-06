#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: pointer to new dog or NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_new = malloc(sizeof(dog_t));
if (dog_new == NULL)
{
return (NULL);
}
dog_new->name = strdup(name);
if (dog_new->name == NULL)
{
free(dog_new);
return (NULL);
}
dog_new->owner = strdup(owner);
if (dog_new->owner == NULL)
{
free(dog_new->name);
free(dog_new);
return (NULL);
}
dog_new->age = age;
return (dog_new);
}
/**
* free_dog - this frees the memory used
* @d: the dog structure
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
