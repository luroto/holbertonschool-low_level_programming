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
	int cont = 0;
	(void) argv;

	if (argc > 1)
	{
		for (; cont < argc; cont++)
		cont--;
	}
	printf("%d\n", cont);
	return (0);
}
