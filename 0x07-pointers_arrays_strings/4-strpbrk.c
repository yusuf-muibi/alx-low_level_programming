#include "main.h"
/**
* _strpbrk - this is the function used to serach for a string
* @s: this is the location of the string to be searched
* @accept: this is the string to be searched for
* Return: this returns the first match of the accept in s
*/
char *_strpbrk(char *s, char *accept)
{
int t;
while (*s)
{
for (t = 0; accept[t]; t++)
{
if (*s == accept[t])
return (s);
}
s++;
}
return ('\0');
}
