#include "main.h"
/**
* _strlen_recursion - This is used to call print the string length
* @s: This is the character whose length gets printer
* Return: This returns the length of the string
*/
int _strlen_recursion(char *s)
{
int t = 0;
if (*s == '\0')
{
return (t);
}
else
t++;
t += _strlen_recursion(s + 1);
return (t);
}
