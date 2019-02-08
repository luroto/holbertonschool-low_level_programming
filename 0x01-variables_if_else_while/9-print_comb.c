#include <stdio.h>
/**
 *main - printing with commas and spaces all combinations single digit numbers
 *
 *Description: Using for and an if to get data to print with comma
 *
 *Return: It is supposed to be 0
 *
 */
int main(void)
{
int num;
for (num = 48 ; num <= 57; num++)
{
putchar(num);
if (num < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
