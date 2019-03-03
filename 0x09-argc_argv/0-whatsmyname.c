#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the name of the program
 *
 *@argc: counter of arguments
 *@argv: name of arguments
 *
 *Return: 0 if succesful
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
		printf("\n");
	}
	return (0);
}
