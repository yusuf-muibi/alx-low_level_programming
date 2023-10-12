#include "main.h"
/**
* _isdigit - This is the main function to test for digit
* @c: This serves as the input
* Return: Returns 1 for a digit and 0 if otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
