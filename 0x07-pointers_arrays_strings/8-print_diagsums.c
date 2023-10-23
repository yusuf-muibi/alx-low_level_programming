#include "main.h"
#include <stdio.h>
/**
* print_diagsums - this is the function that prints the sum of two matrices
* @a: this is the matrix of integers
* @size: this is the size of the matrix
* Return: this returns the sum of the matrices
*/
void print_diagsums(int *a, int size)
{
int t;
int sumA = 0;
int sumB = 0;
for (t = 0; t < size; t++)
{
sumA += a[t];
a += size;
}
a += size;
for (t = 0; t < size; t++)
{
sumB += a[t];
a -= size;
}
printf("%d, %d\n", sumA, sumB);
}
