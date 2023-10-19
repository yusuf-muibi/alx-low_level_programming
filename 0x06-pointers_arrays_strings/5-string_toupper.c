#include "main.h"
/**
* string_toupper - this is the function that changes the string case
* @t: this is the indicator of the string pointer
* Return: this returns the uppercase string
*/
char *string_toupper(char *t)
{
char *upper_case = t;
while (*t)
{
if (*t >= 'a' && *t <= 'z')
{
*t = *t - ('a' - 'A');
}
t++;
}
return (upper_case);
}
