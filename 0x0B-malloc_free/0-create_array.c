#include "main.h"
#include <stdlib.h>
/**
* create_array - this is the function that creates the array
* @c: this is the character to initialize the array with
* @size: this is the size of the array
* Return: this returns the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int t;
char *array;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (t = 0; t < size; t++)
{
array[t] = c;
}
return (array);
}
