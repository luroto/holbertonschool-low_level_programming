#include "holberton.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *create_file - Function that creates a file
 *@filename: name of the fle
 *@text_content: String to fill the new file
 *Return: If succesful 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, conten;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	conten = write(fd, text_content, strlen(text_content));
	if (conten == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
