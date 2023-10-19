#include "main.h"
/**
* rot13 - this is the main rotate by 13 function
* @t: this is the parameter used for the string
* Return: this returns the rotated string
*/
char *rot13(char *t)
{
int u;
for (u = 0; t[u]; u++)
{
if ((t[u] >= 'A' && t[u] <= 'Z') || (t[u] >= 'a' && t[u] <= 'z'))
{
if ((t[u] >= 'A' && t[u] <= 'M') || (t[u] >= 'a' && t[u] <= 'm'))
{
t[u] += 13;
}
else
{
t[u] -= 13;
}
}
}
return (t);
}
