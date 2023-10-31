#include "main.h"
#include <stdlib.h>
/**
* free_grid - function that frees the alloc_grid
* @height: this is the height of the 2 d-a of integers
* @grid: this is the grid to free its space
*/
void free_grid(int **grid, int height)
{
int t;
if (grid != NULL && height > 0)
{
for (t = 0; t < height; t++)
{
free(grid[t]);
}
free(grid);
}
}
