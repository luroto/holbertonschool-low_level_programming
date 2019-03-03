#include <stdio.h>
#include <stdlib.h>
/**
 *whatsmyname - Prints the name of the program
 *
 *@argc: counter of arguments
 *@argv: name of arguments
 *
 *Return: = if succesful
 */
int whatsmyname(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
		printf("\n");
	}
	return (0);
}
