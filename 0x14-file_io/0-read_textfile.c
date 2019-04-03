#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of the file
 *@letters: # of digits
 *Return: Number of printed charas
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reto = 0;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
	{
		free(buf);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	reto = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, reto);
	close(fd);
	return (reto);
}
