#include "main.h"
/**
*  _islower - This is the functoin that checks for lower case characters
* @c: This is the parameter to be checked
* Return: Returns 1 if encounters lowercase and zero otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
