#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - for concatenating two strings
* @s1: string one
* @s2: string two
* @n: this is the number of bytes
* Return: returns the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int len1;
unsigned int len2;
unsigned int t;
unsigned int u;
len1 = 0;
len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n > len2)
n = len2;
str = malloc((len1 + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (t = 0; t < len1; t++)
str[t] = s1[t];
for (u = 0; u < n; u++)
str[len1 + u] = s2[u];
str[len1 + n] = '\0';
return (str);
}
