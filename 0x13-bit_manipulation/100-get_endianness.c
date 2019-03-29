#include <stdio.h>
/**
 *get_endianness - checks that condition
 *Return: It's a void function
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;
	if (*c)
		return (1);
	else
		return(2);
}
