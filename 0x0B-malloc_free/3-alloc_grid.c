#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - function that points to the 2 d-a of integers
* @width: this is the width of the 2 d-a of integers
* @height: this is the height of the 2 d-a of integers
* Return: this returns the 2 dimensional array of intege pointer
*/
int **alloc_grid(int width, int height)
{
int **dim_array;
int t, u;
if (width <= 0 || height <= 0)
{
return (NULL);
}
dim_array = (int **)malloc(height * sizeof(int *));
if (dim_array == NULL)
{
return (NULL);
}
for (t = 0; t < height; t++)
{
dim_array[t] = (int *)malloc(width * sizeof(int));
if (dim_array[t] == NULL)
{
for (u = 0; u < t; u++)
{
free(dim_array[u]);
}
free(dim_array);
return (NULL);
}
for (u = 0; u < width; u++)
{
dim_array[t][u] = 0;
}
}
return (dim_array);
}
