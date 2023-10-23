#include "main.h"
/**
* _memset - this is the main function used in filling a constant byte
* @s: this is the memory to be filled
* @b: this is the value to be filled into s
* @n: number of times to filled b into s
* Return: returns the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;
for (t = 0; t < n; t++)
{
s[t] = b;
}
return (s);
}
