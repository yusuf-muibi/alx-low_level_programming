#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that print strings
* @separator: this is the string separator
* @n: number of strings passed to the function
* Return: returns the string followed by a new line
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vf;
unsigned int t;
va_start(vf, n);
for (t = 0; t < n; t++)
{
const
char *str = va_arg(vf, const
char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && t < n - 1)
{
printf("%s", separator);
}
}
va_end(vf);
printf("\n");
}
