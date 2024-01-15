#include "main.h"
/**
* _isalpha - this is the Function to check if a character is alphabet
* @c: this is the parameter to check its type
* Return: this returns an indicator
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
