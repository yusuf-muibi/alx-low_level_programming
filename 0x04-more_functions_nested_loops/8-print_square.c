#include "main.h"
/**
* print_square - function used to print the square
* @size: size of the square
* Return: returns 0 for a successful execution
*/
void print_square(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int t, u;
for (t = 1; t <= size; t++)
{
for (u = 1; u <= size; u++)
_putchar('#');
_putchar('\n');
}
}
}
