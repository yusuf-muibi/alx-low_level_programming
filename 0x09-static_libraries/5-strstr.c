#include "main.h"
#include <stddef.h>
/**
* _strstr - this function locates a substring
* @haystack: the location of the string
* @needle: this is the substring
* Return: This returns the occurrence of the substring
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (!*n)
{
return (haystack);
}
haystack++;
}
return (NULL);
}
