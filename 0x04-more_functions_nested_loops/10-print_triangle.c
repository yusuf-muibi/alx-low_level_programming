#include "main.h"
/**
* print_triangle - This is the main function in use
* @size: This is the determinant of the triangle size
*/
void print_triangle(int size)
{
int t, u;
if (size > 0)
{
for (t = 1; t <= size; t++)
{
for (u = size - t; u > 0; u--)
{
_putchar(' ');
}
for (u = 0; u < t; u++)
{
_putchar('#');
}
if (t == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
