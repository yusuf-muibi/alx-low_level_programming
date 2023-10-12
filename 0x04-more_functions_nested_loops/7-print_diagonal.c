#include "main.h"
/**
* print_diagonal - this is the function that performs the printing
* @n: the determinant of how long the line will be
* Return: returns a void value
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int t, u;
for (t = 0; t < n ; t++)
{
for (u = 0; u <= t; u++)
{
if (u == t)
_putchar('\\');
else if (u < t)
_putchar(' ');
}
_putchar('\n');
}
}
}
