#include "main.h"
/**
* _puts - this is the Function to print string
* @s: this is the parameter to be printed
* Return: this returns the printed value
*/
void _puts(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
}
