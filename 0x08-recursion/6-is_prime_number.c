#include "main.h"
/**
* _primefinder - checks if integer n is a prime number
* @n: this is the parameter to be tested
* @t: this is the divisor
* Return: this returns a value if a prime number
*/
int _primefinder(int n, int t)
{
if (t <= 1)
{
return (0);
}
if (t == 2)
{
return (1);
}
if (n % t == 0)
{
return (0);
}
else
{
return (_primefinder(n, t - 1));
}
}
/**
* is_prime_number - checks if integer n is a prime number
* @n: this is the parameter to be tested
* Return: this returns a value if a prime number
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
else
{
return (_primefinder(n, n - 1));
}
}
