#include "main.h"
/**
* _atoi - this is the Function to convert a string to int
* @s: this is the parameter to be converted
* Return: this returns the converted value
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
{
result = result * 10 + s[i] - '0';
}
return (sign *result);
}
