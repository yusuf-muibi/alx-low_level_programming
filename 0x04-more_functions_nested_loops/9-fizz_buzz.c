#include <stdio.h>
/**
* main - This is the main function being used
* Return: This returns 0 for a successful execution
*/
int main(void)
{
int t;
for (t = 1; t <= 100; t++)
{
if ((t % 3 == 0) && (t % 5 == 0))
printf("%s", "FizzBuzz");
else if (t % 3 == 0)
printf("%s", "Fizz");
else if (t % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", t);
if (t != 100)
printf(" ");
}
printf("\n");
return (0);
}
