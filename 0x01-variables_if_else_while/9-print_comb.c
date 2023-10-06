#include <stdio.h>
/**
* main - This is the main function used
* Return: Always return value 0 for a successful execution
*/
int main(void)
{
int t;
for (t = 0 ; t < 10 ; t++)
{
putchar(t);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
