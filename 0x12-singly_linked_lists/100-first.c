#include <stdio.h>
void printingthefirst(void) __attribute__ ((constructor));
/**
 *printingthefirst - prints a string
 *Return: Void function
 */
void printingthefirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
