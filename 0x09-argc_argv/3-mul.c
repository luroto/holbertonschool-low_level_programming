#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *main - stores two arguments as integers and prints their multiplication
 *
 *
 *
 */
int main(int argc, char ** argv)
{
	int i, iv, multip1, multip2, product;

	if (argc > 1)
	{
	for(i = 1; i < argc; i++)
	{
	}
	}
	for(iv = 0; iv < (i - 1); iv++)
	{
		if (iv == 1)
		{
			multip1 = atoi(argv[2]);
		}
		if (iv == i - 1)
		{
			multip2 = atoi(argv[3]);
		}
	}
	printf("printing argc %d\n", i);
	printf("printing argv %d\n", iv);
	if (i != 3)
        {
                printf("%s\n", "Error");
                return (1);
        }
        else if (i == 3)
        {
                product = multip1 * multip2;
                printf("%u\n", multip1);
		printf("%u\n", multip2);
		printf("%d\n", product);
	 }
return (0);
}
