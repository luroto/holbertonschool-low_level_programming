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
	(void) argv;
	int cont = (argc - 1);

	printf("%d\n", cont);
	return (0);
}
