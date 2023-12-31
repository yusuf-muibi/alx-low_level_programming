#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdigit(char *s);
int _atoi(char *s);
int main(int argc, char *argv[]);
int _putchar(char c);
int _isdigit(char *s);
void _print_int(int n);
void print_error(void);

#endif

