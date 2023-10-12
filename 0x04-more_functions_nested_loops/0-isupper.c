#include "main.h"
/**
 * _isupper - the function that checks for upper case character
 * @c: The parameter that serves as input
 * Return: Returns 1 for upper case and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
