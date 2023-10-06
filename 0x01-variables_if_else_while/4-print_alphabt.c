#include <stdio.h>

/**
* main - This is the main function
* Return: Always return zero for a successful execution
*/
int main(void)
{
char t;
for (t = 'a' ; t <= 'z' ; t++)
if (t != 'e' && t != 'q')
putchar(t);
putchar('\n');
return (0);
}
