#include "main.h"
/**
* _strlen - returns the length of a string
* @s: parameter to count the length
* Return: returns the length of the parameter
*/

int _strlen(char *s)
{
int t;
int count = 0;
for (t = 0; s[t] != '\0'; t++)
count++;
return (count);
}
