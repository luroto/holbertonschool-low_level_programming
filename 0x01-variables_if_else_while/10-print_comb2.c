#include <stdio.h>
/**
 *main - This function prints numbers from 00 to 99 in ASCII code
 *
 *Description: Using for to get data, if for conditionals
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
int numa, numb;

for (numa = 48 ; numa <= 57 ; numa++)
{
for (numb = 48 ; numb <= 57 ; numb++)
{
putchar(numa);
putchar(numb);
if (numb == 57 && numa == 57)
{
	numa++;
	numb++;
}
if (numb < 58 && numa < 58)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
