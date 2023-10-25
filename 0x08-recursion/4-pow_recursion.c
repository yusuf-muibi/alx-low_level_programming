#include "main.h"
/**
* _pow_recursion - this is the function that performs power mul
* @x: the base parameter
* @y: the power multiplier
* Return: returns the result of the calculation
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
