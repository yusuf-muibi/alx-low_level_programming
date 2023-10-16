#include "main.h"
/**
* puts2 - this is the main function that prints every other character
* @str: this is the parameter to be printed
* Return: this returns a void value
*/
void puts2(char *str)
{
int t;
for (t = 0; str[t] != '\0'; t++)
{
if (t % 2 == 0)
_putchar(str[t]);
}
_putchar('\n');
}
