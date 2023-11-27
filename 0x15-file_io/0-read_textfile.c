#include "main.h"

/**
 * read_textfile -  Reads text from a file and print it to the POSIX STDOUT
 * @filename:The filename that has to be read
 * @letters:The amount of letters that must be read and printed
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t read_From;
ssize_t write_To;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = (char *) malloc(sizeof(char) * letters);
read_From = read(fd, buf, letters);
if (read_From == -1)
{
close(fd);
free(buf);
return (0);

}
write_To = write(STDOUT_FILENO, buf, read_From);
if (write_To == -1)
{
close(fd);
free(buf);
return (0);
}
if (write_To != read_From)
{
close(fd);
free(buf);
return (0);

}


close(fd);
return (read_From);

}
