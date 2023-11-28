#include "main.h"

/**
 * append_text_to_file - A function that append text at the end of a file
 * @filename: The filename that has to be read
 * @text_content: The text to append to the end of a file
 * Return: -1 on failure or 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd;
int appendFd;
if (filename == NULL)
return (-1);


fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
appendFd = write(fd, text_content, strlen(text_content));
}
if (appendFd == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}

