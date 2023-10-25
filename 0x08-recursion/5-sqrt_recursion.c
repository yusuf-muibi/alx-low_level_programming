#include "main.h"
/**
* _squareroot - this is the function that checks for natural roots
* _sqrt_recursion - this is the function that performs the recursion
* @n: this is the parameter to check square root
* @t: this is the initial guess value
* Return: this returns the value of the squareroot
*/
int _squareroot(int n, int t)
{
if (t * t == n)
{
return (t);
}
else if (t * t > n)
{
return (-1);
}
else
{
return (_squareroot(n, t + 1));
}
}
/**
* _sqrt_recursion - this the main function
* @n: this is the parameter to check square root
* Return: this returns the value of the squareroot
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_squareroot(n, 1));
}
}
