#include "main.h"
/**
* print_last_digit - Function used in this program to print last digit
* @t: This is the parameter used to receive input
* Return: Always return 0 for a successful execution
*/
int print_last_digit(int t)
{
int u;
u = t % 10;
if (t < 0)
u = -u;
_putchar(u + '0')
return (u);
}
