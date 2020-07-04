#include <stdio.h>
/**
 *main - highlight the multipliers of 3 and 5 in a series from 0 to 100
 *
 *Return: It is supposed to be zero
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
if (x % 3 == 0 && x % 5 != 0)
{
printf("Fizz");
}
if (x % 3 != 0 && x % 5 == 0)
{
printf("Buzz");
}
if (x % 3 != 0 && x % 5 != 0)
{
	printf("%d", x);
}
if (x != 100)
{
	printf(" ");
}
}
putchar('\n');
return (0);
}
