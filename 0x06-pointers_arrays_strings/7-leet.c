#include "main.h"
/**
* leet - this is the function being used for the encoding
* @t: this is the parameter to be encoded
* Return: this returns the encoded values
*/
char *leet(char *t)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "4300711";
int u, v;
for (u = 0; t[u] != '\0'; u++)
{
for (v = 0; v < 10; v++)
{
if (t[u] == letters[v])
{
t[u] = numbers[v / 2];
break;
}
}
}
return (t);
}
