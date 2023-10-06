#include <stdio.h>
/**
* main - This is the main function of the program
* Return: Return value always zero for a successful execution
*/
int main(void)
{
int t;
char u;
for (t = 0 ; t < 10 ; t++)
putchar(t + '0');
for (u = 'a' ; u <= 'f' ; u++)
putchar(u);
putchar('\n');
return (0);
}
