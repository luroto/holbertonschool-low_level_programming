#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, m = 0, n = 0, cents;
	int array [4] = {25, 10, 2, 1};

	cents = atoi(argv[2]);
	if (argc != 1)
	{
		printf ("%s\n", "Error");
		return (1);
	}
	for (i = 0; i != '\0'; i++)
	{
		if (cents >= array[i])
		{
			m = m + (m/array[i]);
			n = n % array[i];
		}
	}
	printf("%d\n", m);
	return (0);
}
