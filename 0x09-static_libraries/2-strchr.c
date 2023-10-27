#include "main.h"
#include <stddef.h>
/**
* _strchr - this function locate a character in a string
* @s: this is the string
* @c: this is the character to be located
* Return: this returns the location
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
