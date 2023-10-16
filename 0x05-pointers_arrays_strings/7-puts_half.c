#include "main.h"
/**
* puts_half - this is the function that prints half of the string
* @str: this is the parameter to be printed
* Return: this returns a void value
*/
void puts_half(char *str)
{
int t, n, count = 0;

for (t = 0; str[t] != '\0'; t++)
count++;

n = (count - 1) / 2;

for (t = n + 1; str[t] != '\0'; t++)

_putchar(str[t]);

_putchar('\n');
}
