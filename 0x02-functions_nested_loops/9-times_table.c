#include "main.h"
#include <stdio.h>
/**
* times_table - this is the main function being used
* Return: This returns 0 for a successful execution
*/
void times_table(void)
{
int t, u, v;
for (t = 0 ; t < 10 ; t++)
{
for (u = 0 ; u < 10 ; u++)
{
v = t * u;
if (u == 0)
printf("%d, ", v);
else
{
printf("%2d, ", v);
if (u != 9)
printf(", ");
}
}
printf("\n");
}
}
