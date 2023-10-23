#include "main.h"
/**
* _strstr - this is the function that locates a substring
* @haystack: the location of the string
* @needle: this is the substring to be searched for
* Return: this returns the location of the substring or null if not found
*/
char *_strstr(char *haystack, char *needle)
{
int t;
if (*needle == 0)
return (haystack);
while (*haystack)
{
t = 0;
if (haystack[t] == needle[t])
{
do {
if (needle[t + 1] == '\0')
return (haystack);
t++;
} while (haystack[t] == needle[t]);
}
haystack++;
}
return ('\0');
}
