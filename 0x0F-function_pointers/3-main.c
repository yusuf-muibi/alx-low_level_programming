#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, exits with a status of 98, 99, or 100 on failure
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *op_func;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = argv[2];
if (get_op_func(op_func) == NULL || op_func[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op_func == '/' && num2 == 0) || (*op_func == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op_func)(num1, num2));
return (0);
}
