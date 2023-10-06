#include <stdio.h>
/**
* main - This is the main function used
* Return: Always return value 0 for a successful execution
*/
int main(void)
{
int t;
for (t = 0 ; t <= 9 ; t++)
{
if (t == 9)
putchar(t + '0');
else
{
putchar(t + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
