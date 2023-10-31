#include "main.h"
#include <stdlib.h>
/**
* count_words - count the number of words in a string
* @str: the string to be evaluated
* Return: the number of words in the string
*/
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* copy_word - allocate memory and copy a word into it
* @start: the start of the word
* @end: the end of the word
* Return: a pointer to the copied word
*/
char *copy_word(char *start, char *end)
{
char *word;
char *w;
word = malloc((end - start + 1) * sizeof(char));
if (word == NULL)
{
return (NULL);
}
w = word;
while (start < end)
{
*w++ = *start++;
}
*w = '\0';
return (word);
}
/**
* strtow - split a string into words
* @str: the string to be split
* Return: a pointer to an array of words
*/
char **strtow(char *str)
{
int word_count;
char **words;
char *start;
int t;
if (str == NULL || *str == '\0')
{
return (NULL);
}
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
start = NULL;
t = 0;
while (*str)
{
if (*str == ' ')
{
if (start)
{
words[t++] = copy_word(start, str);
start = NULL;
}
}
else if (!start)
{
start = str;
}
str++;
}
if (start)
{
words[t++] = copy_word(start, str);
}
words[t] = NULL;
return (words);
}
