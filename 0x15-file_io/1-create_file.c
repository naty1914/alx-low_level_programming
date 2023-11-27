#include "main.h"

/**
 * create_file -  A function that creates a file
 * @filename: The filename that has to be read
 * @text_content: Text content to be written to the newly created file
 * Return: -1 on failure or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int writeFd;
if (filename == NULL)
return (-1);


fd = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
writeFd = write(fd, text_content, strlen(text_content));
}
if (writeFd == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
