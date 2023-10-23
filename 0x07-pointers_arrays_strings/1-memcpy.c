#include "main.h"
/**
* _memcpy - This is the function that copies n bytes from src to dest
* @src: this is the source memory area
* @dest: this is the destination memory area
* @n: this is the value to be copied
* Return: this returns the pointer of the dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int t = 0;
while (t < n)
{
dest[t] = src[t];
t++;
}
return (dest);
}
