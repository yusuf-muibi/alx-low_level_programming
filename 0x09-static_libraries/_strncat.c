#include "main.h"
/**
* _strncat - this is the Function to concatenaten characters
* @dest: this is the destination parameter
* @src: this is the source parameter
* @n: this is the indicator
* Return: this returns the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
