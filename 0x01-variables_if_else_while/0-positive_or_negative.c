#include <stdlib.h>
#include <time.h>
/**
*main - Takes a random number and prints if is positive, negative or zero
*
*Description: Using diverse functions for random, we add an
*if function to print the type of*number which was generated.
*
*Return: It is supposed to return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n = 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
