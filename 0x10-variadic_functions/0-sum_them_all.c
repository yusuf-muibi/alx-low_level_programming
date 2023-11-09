#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - this is the function that sums up parameters
* @n: this is the parameter to be sumed up
* Return: this returns the value of the sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list vf;
int sum = 0;
unsigned int t;
va_start(vf, n);
for (t = 0; t < n; t++)
{
sum += va_arg(vf, int);
}
va_end(vf);
return (sum);
}
