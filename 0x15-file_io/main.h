#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int code, const char *message, const char *arg);
int main(int argc, char *argv[]);
void copy_file(const char *file_from, const char *file_to);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
