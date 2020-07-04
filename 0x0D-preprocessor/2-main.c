#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 *main - prints the name of the file it was compiled from
 *Return: it is not neccesary
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
