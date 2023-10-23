#include "main.h"
/**
* _strchr - this is the function that indicates occurence of c in s
* @c: this is the character to be found in the string
* @s: this is the string to be searched
* Return: this returns the pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
int t;
for (t = 0; s[t] >= '\0'; t++)
{
if (s[t] == c)
return (s + t);
}
return ('\0');
}
