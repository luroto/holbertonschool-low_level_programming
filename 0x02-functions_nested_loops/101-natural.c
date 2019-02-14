#include <stdio.h>
/**
*main - prints the addition of all numbers which are multiples of 3 and 5
*below 1024
*
*Return: 0
*/
int main(void)
{
int n, a;

while (n < 1024)
{
if ((n % 3) == 0)
{
a = n + a;
}
else if ((n % 5) == 0)
{
a = n + a;
}
n++;
}
printf("%d\n", a);
return (0);
}
