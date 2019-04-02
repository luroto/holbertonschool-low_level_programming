#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "holberton.h"
/**
 *append_text_to_file - appends a string to a already created file
 *@filename: name of the file
 *@text_content: string to be appended
 *Return: 1 if sucessful otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, conten;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		else
		{
			conten = write(fd, text_content, strlen(text_content));
			if (conten == -1)
			{
			return (-1);
			}
		}
	close(fd);
	return (1);
}
