#include <unistd.h>

/**
* _putchar - writes the character to stdout                           \
* @c: The character to print out
* Return: On success 1, On error, -1 is returned, and errno is set appro\
priately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
