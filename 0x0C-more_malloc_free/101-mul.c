#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _isdigit(char *s);
int _atoi(char *s);
void _print_int(int n);
/**
* main - multiplies two positive numbers
* @argc: number of command line arguments
* @argv: array of command line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
exit(98);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
_print_int(result);
_putchar('\n');
return (0);
}
/**
* _isdigit - checks if a string contains only digits
* @s: string to check
* Return: 1 if string contains only digits, 0 otherwise
*/
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
* _atoi - converts a string to an integer
* @s: string to convert
* Return: integer value of the string
*/
int _atoi(char *s)
{
int result = 0;
while (*s)
{
result = result * 10 + (*s - '0');
s++;
}
return (result);
}
/**
* _print_int - prints an integer
* @n: integer to print
*/
void _print_int(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
_print_int(n / 10);
_putchar(n % 10 + '0');
}
