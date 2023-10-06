#include <stdio.h>
/**
* main - this is the main function for the program
*Return: always return 0 for a successful execution
*/
int main(void)
{
char t;
for (t = 'a' ; t <= 'z' ; t++)
putchar(t);
for (t = 'A' ; t <= 'Z' ; t++)
putchar(t);
putchar('\n');
return (0);
}
