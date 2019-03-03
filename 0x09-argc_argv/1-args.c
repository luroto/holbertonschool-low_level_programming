#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the number of arguments passed into it
 *
 *Return; It is supposed to be 0.
 *
 */
int main(int argc, char **argv)
{
	int cont;
	(void) argv;

	if (argc > 0)
	{
		for (cont = 0; cont < argc; cont++);
	}
	printf ("%d", cont);
	printf("\n");
}
