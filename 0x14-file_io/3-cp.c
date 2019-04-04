#include "holberton.h"
/**
 *main- Emulates cp function
 *@ac: # of arguments
 *@av: arguments from the command line
 *Return: it depends
 */
int main(int ac, char **av)
{
	int fdorigin, fddestiny, sizeall, alldest;
	char buf[1024];

	if (ac != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	fdorigin = open(av[1], O_RDONLY);
	if (fdorigin == -1)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s", av[1]),
			exit(98);
	fddestiny = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fddestiny == -1)
		dprintf(STDOUT_FILENO, "Error: Can't write to %s", av[2]),
			exit(99);
	sizeall = read(fdorigin, buf, 1024);
	if (sizeall == -1)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s", av[1]),
			exit(98);
	while (sizeall != 0)
	{
		alldest = write(fddestiny, buf, sizeall);
		if (alldest == -1)
			dprintf(STDOUT_FILENO,
				"Error: Can't write to %s", av[2]),
				exit(99);
		sizeall = read(fdorigin, buf, 1024);
		if (sizeall == -1)
			dprintf(STDOUT_FILENO,
				"Error: Can't read from file %s", av[1]),
			exit(98);
	}
	alldest = close(fdorigin);
	if (alldest == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d", fdorigin),
		exit(100);
	alldest = close(fddestiny);
	if (alldest == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d", fddestiny);
	return (0);
}
