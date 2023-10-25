#include "main.h"
/**
* factorial - this is the function that calculates the factorial
* @n: this is the parameter to calculate its factorial
* Return: returns the result of the calculation
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
