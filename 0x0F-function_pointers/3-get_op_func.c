#include "3-calc.h"
#include <stddef.h>
/**
* get_op_func - selects the correct math function to perform
* @s: operator passed as argument
* Return: pointer to the function that corresponds to the operator
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int t;
t = 0;
while (ops[t].op != NULL && *(ops[t].op) != *s)
t++;
return (ops[t].f);
}
