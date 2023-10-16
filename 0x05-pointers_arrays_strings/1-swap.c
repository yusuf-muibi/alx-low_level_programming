#include "main.h"
/**
* swap_int - this swaps the value of two integers
* @a: parameter 1
* @b: parameter 2
* Return: returns a void value
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
