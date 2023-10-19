#include "main.h"
/**
* infinite_add - this is the main function in use
* @n1: this is parameter one
* @n2: this is the second parameter
* @r: this is the result buffer
* @size_r: this is the size of the buffer
* Return: this returns the value of the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry = 0, sum, k;
for (len1 = 0; n1[len1]; len1++);
for (len2 = 0; n2[len2]; len2++);
size_r--;
r[size_r] = '\0';
k = size_r - 1;
len1--, len2--;
while (len1 >= 0 || len2 >= 0 || carry)
{
if (k < 0)
return (0);
sum = carry;
if (len1 >= 0) sum += n1[len1--] - '0';
if (len2 >= 0) sum += n2[len2--] - '0';
r[k--] = (sum % 10) + '0';
carry = sum / 10;
}
return (r + k + 1);
}
