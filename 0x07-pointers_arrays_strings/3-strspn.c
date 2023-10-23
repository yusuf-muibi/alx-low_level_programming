#include "main.h"
/**
* _strspn - this is the function that calculate the length of a string
* @s: this is the memory location of the string
* @accept: this is the characters to be counted
* Return: this returns the number of bytes in the segment s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int t = 0;
int u;
while (*s)
{
for (u = 0; accept[u]; u++)
{
if (*s == accept[u])
{
t++;
break;
}
else if (accept[u + 1] == '\0')
return (t);
}
s++;
}
return (t);
}
