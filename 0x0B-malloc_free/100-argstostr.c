#include "main.h"
#include <stdlib.h>
/**
* argstostr - function that concatenates all arguments
* @av: argument value
* @ac: argument count
* Return: returns the concatenated arguments
*/
char *argstostr(int ac, char **av)
{
char *con_string;
int length;
int t;
int u;
int v;
length = 0;
t = 0;
u = 0;
v = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (t = 0; t < ac; t++)
{
for (u = 0; av[t][u]; u++)
{
length++;
}
length++;
}
con_string = malloc((length + 1) * sizeof(char));
if (con_string == NULL)
{
return (NULL);
}
for (t = 0; t < ac; t++)
{
for (u = 0; av[t][u]; u++)
{
con_string[v++] = av[t][u];
}
con_string[v++] = '\n';
}
con_string[v] = '\0';
return (con_string);
}
