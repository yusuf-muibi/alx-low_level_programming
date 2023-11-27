#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
* print_error_and_exit - Print an error message, clean up resources, and exit.
* @code: The exit code to use.
* @message: The error message format string.
* @arg: The argument for the format string.
*/
void print_error_and_exit(int code, const char *message, const char *arg)
{
dprintf(2, message, arg);
exit(code);
}

/**
* copy_file - Copy the contents of one file to another.
* @file_from: The path of the source file.
* @file_to: The path of the destination file.
*/

void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
char fd_from_str[12];
char fd_to_str[12];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
}

do {
bytes_read = read(fd_from, buffer, BUFFER_SIZE);
if (bytes_read == -1)
print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
} while (bytes_read == BUFFER_SIZE);

if (close(fd_from) == -1)
{
sprintf(fd_from_str, "%d", fd_from);
print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from_str);

if (close(fd_to) == -1)
{
close(fd_from);
sprintf(fd_to_str, "%d", fd_to);
print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to_str);
}
}
}
/**
* main - Entry point for the file copy program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
* Return: 0 on success, 97 for incorrect arguments, or other error codes.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
copy_file(argv[1], argv[2]);
return (0);
}
