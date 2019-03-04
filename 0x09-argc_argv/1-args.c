#include <stdio.h>
/**
 *main - Prints the number of arguments passed into it
 *
 *@argc: number of arguments
 *@argv: arguments
 *Return: It is supposed to be 0
 */
int main(int argc, char **argv)
{
	int cont = (argc - 1);
	(void) argv;

	printf("%d", cont);
	printf("\n");
}
