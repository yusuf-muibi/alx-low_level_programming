#include <unistd.h>
/**
* __putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1
* On Error, -1 is returned and errno is set approximately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
