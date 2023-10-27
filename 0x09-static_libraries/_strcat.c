#include "main.h"
/**
* _strcat - this is the Function to concatenate two strings
* @dest: this is the destination parameter
* @src: this is the source parameter
* Return: this returns the concatenated string
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
