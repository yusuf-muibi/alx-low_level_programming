#include "main.h"
/**
* cap_string - this is the function used to capitalize each word
* @t: this is the character pointer
* Return: this returns the characters with uppercase for each word
*/
char *cap_string(char *t)
{
char *upper_word = t;
while (*t)
{
if (*t >= 'a' && *t <= 'z')
{
if (t == upper_word ||
*(t - 1) == ' ' || *(t - 1) == '\t' || *(t - 1) == '\n' ||
*(t - 1) == ',' || *(t - 1) == ';' || *(t - 1) == '.' ||
*(t - 1) == '!' || *(t - 1) == '?' || *(t - 1) == '"' ||
*(t - 1) == '(' || *(t - 1) == ')' || *(t - 1) == '{' ||
*(t - 1) == '}')
{
*t -= ('a' - 'A');
}
}
t++;
}
return (upper_word);
}
