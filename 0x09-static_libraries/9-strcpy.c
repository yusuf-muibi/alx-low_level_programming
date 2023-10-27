#include "main.h"
/**
* _strcpy - this is the Function to copy a string
* @dest: this is the destination parameter
* @src: this is the source parameter
* Return: this returns the copied character
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return dest;
}
