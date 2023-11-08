#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - Searches for an integer in an array via a comparison function
* @array: Array of integers
* @size: Number of elements in the array
* @cmp: Pointer to the comparison function
* Return: The index of the first element for which cmp does not return 0,
*         or -1 if no element matches or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int t;
if (array && cmp && size > 0)
{
for (t = 0; t < size; t++)
{
if (cmp(array[t]))
{
return (t);
}
}
}
return (-1);
}
