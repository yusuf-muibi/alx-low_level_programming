#include "main.h"

/**
* print_most_numbers - this is the function we are using to print 0 through 9
* Return: reurns void
*/
void print_most_numbers(void)
{
int t;
for (t = 0; t <= 9; t++)
{
if (t != 2 && t != 4)
_putchar(t + '0');
}
_putchar('\n');
}
