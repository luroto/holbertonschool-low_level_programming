#include <stdio.h>
/**
 *main - prints three numbers of one digit
 *
 *Description: We'll get a series of three numbers of one digit which can't be
 *repeated, and other conditions.
 *
 *Return: It is supposed to be 0.
 */
int main(void)
{
	int numa, numb, numc;

	for (numa = 48; numa <= 57; numa++)
	{
		for (numb = numa + 1; numb <= 57; numb++)
		{
			for (numc = numb + 1 ; numc <= 57; numc++)
			{
				putchar(numa);
				putchar(numb);
				putchar(numc);
				{
					if (numa == 55 && numb == 56 && numc == 57)
					{
						numa++;
						numb++;
						numc++;
					}
					if (numa <= 55 && numb <= 56 && numc <= 57)
					{
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
