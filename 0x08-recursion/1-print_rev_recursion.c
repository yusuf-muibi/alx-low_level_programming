#include "main.h"
/**
* _print_rev_recursion - This is used to call the recursion function
* @s: This is the character to be printed
* Return: This returns the string of characters
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
