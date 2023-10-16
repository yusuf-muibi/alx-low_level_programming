#include "main.h"

/**
* _puts - function that prints the string followed by a new line
* @str: this is the string to be printed
* Return: this returns void
*/

void _puts(char *str)
{
int t;
for (t = 0; str[t] != '\0'; t++)
_putchar(str[t]);
_putchar('\n');
}
