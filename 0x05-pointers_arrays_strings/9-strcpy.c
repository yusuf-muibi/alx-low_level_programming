#include "main.h"
#include <stdio.h>
/**
* _strcpy - this is the function that copies the string
* @dest: this is the destination parameter
* @src: this is the source parameter
* Return: returns the pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
int t;
for (t = 0; src[t] != '\0'; t++)
dest[t] = src[t];
dest[t] = '\0';
return (dest);
}
