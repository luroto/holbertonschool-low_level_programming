#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Generates a random number and takes the last digit
 *
 *Description: It takes the last digit of a random number and prints if it is
 *greater than 5, 0 or less than 6 and different than 0.
 *
 *Return: It is supossed to be 0
*/
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = (n % 10);
if (digit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
if (digit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, digit);
}
if (digit < 6 && digit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}
return (0);
}
