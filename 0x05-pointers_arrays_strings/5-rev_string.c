#include "main.h"
/**
* rev_string - this is the function that reverses the string
* @s: this is the parameter to be reversed
* Return: this returns a void value
*/
void rev_string(char *s)
{
int t;
char u;
int count = 0;
for (t = 0; s[t] != '\0'; t++)
count++;
for (t = 0; t < count / 2; t++)
{
u = s[t];
s[t] = s[count - 1 - t];
s[count - 1 - t] = u;
}
}
