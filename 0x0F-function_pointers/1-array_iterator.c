#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - function given as a parameter on each array element
* @array: pointer to the array to iterate over
* @size: the size of the array
* @action: pointer to the function to use on elements of the array
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t t;
if (array && action)
{
for (t = 0; t < size; t++)
{
action(array[t]);
}
}
}
