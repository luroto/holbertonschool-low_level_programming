#include <stdio.h>
/**
*main - prints the single digit numbers on base 10
*
*Description: Getting data with a for, printing with a printf
*
*Return: It  is supposed to be 0
*
*/
int main(void)
{
int num;
for (num = 0; num <= 9 ; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
