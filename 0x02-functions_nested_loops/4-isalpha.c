#include "main.h"
/**
* _isalpha - This is the function that checks for alphabetic character
* @c: This is the character being checked
* Return: This returns 1 for a letter regardless of case and 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
