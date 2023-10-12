#include "main.h"
/**
* print_line - This is the function used to print the line on the terminal
* @n: This is the determinant of the length of the line
* Return: This returns zero for a s successful execution
*/
void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int t;
for (t = 0; t < n; t++)
_putchar('_');
_putchar('\n');
}
}
