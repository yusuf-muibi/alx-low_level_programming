#include "main.h"
#include <stddef.h>
/**
* _strpbrk - this function locate a character in a string
* @s: this is the string location
* @accept: this is the locator
* Return: this returns the first occurrence of the character
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
for (int i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
