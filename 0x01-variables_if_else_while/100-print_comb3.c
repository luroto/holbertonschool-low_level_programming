#include <stdio.h>
/**
 *main - This function prints numbers from 00 to 99 in ASCII code avoiding
 *combinations of two numbers which are the same and excluding numbers
 *which appear later swapped
 *
 *Description: Using for to get data, if for conditionals
 *
 *Return: It is supposed to be 0
 */
int main(void)
{
int numa, numb;

for (numa = 48; numa <= 57; numa++)
{
for (numb = numa + 1; numb <= 57; numb++)
{
putchar(numa);
putchar(numb);
if (numa == 56 && numb == 57)
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
