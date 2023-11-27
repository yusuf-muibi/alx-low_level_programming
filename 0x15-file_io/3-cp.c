#include "main.h"
#include <stdio.h>

/**
* check_errors - checks if files can be opened.
* @source_fd: source file descriptor.
* @dest_fd: destination file descriptor.
* @args: command line arguments.
* Return: no return.
*/
void check_errors(int source_fd, int dest_fd, char *args[])
{
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
exit(98);
}
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
exit(99);
}
}

/**
* main - main function.
* @argc: number of arguments.
* @argv: argument vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int source_fd, dest_fd, close_result;
ssize_t num_chars, num_written;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: my_cp source_file dest_file");
exit(97);
}

source_fd = open(argv[1], O_RDONLY);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
check_errors(source_fd, dest_fd, argv);

num_chars = 1024;
while (num_chars == 1024)
{
num_chars = read(source_fd, buffer, 1024);
if (num_chars == -1)
check_errors(-1, 0, argv);
num_written = write(dest_fd, buffer, num_chars);
if (num_written == -1)
check_errors(0, -1, argv);
}

close_result = close(source_fd);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(100);
}

close_result = close(dest_fd);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}
return (0);
}
