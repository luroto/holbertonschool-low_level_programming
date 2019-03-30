#include <stdio.h>

/**
 *main - prints the fibonacci numbers starting with 1 and 2
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
	int c;
	long int f1 = 0, f2 = 1, f3;

	for (c = 0 ; c < 50 ; c++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if (c < 49)
		{
			printf("%ld, ", f3);
		}
		else
		{
			printf("%ld", f3);
		}
	}
	printf("\n");
	return (0);
}
