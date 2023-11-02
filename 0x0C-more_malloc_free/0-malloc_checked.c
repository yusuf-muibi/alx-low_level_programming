#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory
* @b: parameter representing number of bytes to be allocated
* Return: returns the pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
