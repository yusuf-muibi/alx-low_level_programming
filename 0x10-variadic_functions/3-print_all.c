#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - function that prints anything
* @format: desired format
* Return: returns the print element
*/
void print_all(const char * const format, ...)
{
int t = 0;
char *str, *sep = "";
va_list vf;
va_start(vf, format);
if (format)
{
while (format[t])
{
switch (format[t])
{
case 'c':
printf("%s%c", sep, va_arg(vf, int));
break;
case 'i':
printf("%s%d", sep, va_arg(vf, int));
break;
case 'f':
printf("%s%f", sep, va_arg(vf, double));
break;
case 's':
str = va_arg(vf, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
t++;
continue;
}
sep = ", ";
t++;
}
}
printf("\n");
va_end(vf);
}
