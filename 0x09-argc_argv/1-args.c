#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the number of arguments passed into it
 *
 *Return; It is supposed to be 0.
 *
 */
int main(__attribute__((argv)) int argc)
{
	int cont;

	if (argc > 1)
	{
		for (cont = 0; cont < argc; cont++)
			printf ("%c", cont);
	}
	return (0);
}
