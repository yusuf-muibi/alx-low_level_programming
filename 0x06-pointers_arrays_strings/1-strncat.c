#include "main.h"
/**
* _strncat - this is the function that concatenates two string
* @dest: this is the destination string
* @src: this is the source string
* @n: this is the parameter for the length of string
* Return: this returns the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
char *destEnd = dest;
int t;
for (t = 0; dest[t] != '\0'; t++)
{
destEnd = &dest[t + 1];
}
for (t = 0; t < n && src[t] != '\0'; t++)
{
destEnd[t] = src[t];
}
destEnd[n] = '\0';
return (dest);
}
