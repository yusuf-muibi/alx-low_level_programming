#include "main.h"
#include <stdio.h>
/**
* main - the main function in the program
* @argc: this is the number of arguments
* @argv: this is the array of the arguments
* Return: returns zero for a successful execution
*/
int main(int argc, char *argv[])
{
int t;
for (t = 0; t < argc; t++)
{
printf("%s\n", argv[t]);
}
return (0);
}
