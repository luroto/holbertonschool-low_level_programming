#include <stdio.h>
#include <stdlib.h>
/**
 *main - make something
 *@argc: argument counter
 *@argv: argument pointer to a pointer of arrays
 *Return: cerito
 */
int main(int argc, char **argv)
{
	int entero;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}
	entero = atoi(argv[1]);
	if (entero < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
