#include "main.h"
#include <stdio.h>
/**
* print_chessboard - this is the function that prints the chessboard
* @a: this is the number of row
* Return: this returns the printed chessboard
*/
void print_chessboard(char (*a)[8])
{
int t, u;
for (t = 0; t < 8; t++)
{
for (u = 0; u < 8; u++)
{
printf("%c", a[t][u]);
}
printf("\n");
}
}
