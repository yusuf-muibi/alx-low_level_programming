#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - this is the function concatenating the strings
* @s1: this is the first string
* @s2: this is the second string
* Return: this returns the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
char *result;
int t, u;
int len1, len2;
len1 = 0;
len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (t = 0; t < len1; t++)
{
result[t] = s1[t];
}
for (u = 0; u < len2; u++, t++)
{
result[t] = s2[u];
}
result[t] = '\0';
return (result);
}
