#include "main.h"
/**
* _strspn - this function gets the length of a prefix substring
* @s: this is the string
* @accept: this is the substring
* Return: this returns the length
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
while (*s)
{
found = 0;
for (int i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (found)
{
count++;
s++;
}
else
{
break;
}
}
return (count);
}
