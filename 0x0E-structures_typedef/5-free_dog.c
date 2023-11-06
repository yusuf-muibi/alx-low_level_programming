#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_dog - function to free the memory allocated
* @d: this is the structure itself
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
