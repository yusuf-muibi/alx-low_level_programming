#include "main.h"
/**
* _memset - this fills memory with a constant byte
* @b: this is the constant byte
* @s: this is the memory to be filled
* @n: this is the number of times b fills s
* Return: this returns the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
