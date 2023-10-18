#include "main.h"
/**
* reverse_array - this is the main function that reverses the array
* @a: this is the address of the array to be reversed
* @n this is the number of element to be reversed
* Return: this returns zero for a successful execution
*/
void reverse_array(int *a, int n)
{
int t;
int u;
for (u = 0; u < n / 2; u++)
{
t = a[u];
a[u] = a[n - u - 1];
a[n - u - 1] = t;
}
}
