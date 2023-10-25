#include "main.h"
/**
* wildcmp - this is the function comparing 2 strings
* @s1: first string to be compared
* @s2: second string to be compared
* Return: Returns a value based on the condition
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
