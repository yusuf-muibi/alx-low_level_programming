#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a name using the function pointed to by `f`
* @name: name of the person
* @f: function pointer to a function that takes a char* and returns nothing
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
