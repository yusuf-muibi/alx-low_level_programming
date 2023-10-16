#include "main.h"
/**
* print_rev - this is the main function that prints string in reverse
* @s: this is the parameter to be printed
* Rrturn: this returns a void value
*/
void print_rev(char *s)
{
int t;
int count = 0;
for (t = 0; s[t] != '\0'; t++)
count++;
for (t = count - 1; t >= 0; t--)
_putchar(s[t]);
_putchar('\n');
}
