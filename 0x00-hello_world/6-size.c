#include <stdio.h>
/**
*main - Displays size of various types
*
*Description: This function displays the size of some variables
*@sizeof(char) Getting the size in kb of char
*@sizeof(int) Getting the size in kb of int
*@sizeof(long int) Getting the size in kb of long int
*@sizeof(long long int) Getting the size in kb of long long int
*@sizeof (float) Getting the size in kb of float
*
*Return: It is supossed to return 0
*/
int main(void)
{
printf("Size of a char:%d byte(s)\n", sizeof(char));
printf("Size of a int:%d byte(s)\n", sizeof(int));
printf("Size of a long int:%d byte(s)\n", sizeof(long int));
printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
printf("Size of a float:%d byte(s)\n", sizeof(float));
return (0);
}
