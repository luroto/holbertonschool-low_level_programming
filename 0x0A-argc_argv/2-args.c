#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the number of arguments passed into it
 *
 *@argc: number of arguments
 *@argv: arguments
 *Return: It is supposed to be 0
 */
int main(int argc, char **argv)
{
	int cont;

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	if (argc > 1)
	{
		for (cont = 0; cont < argc; cont++)
		{
			printf("%s\n", argv[cont]);
		}
	}
	return (0);
}
