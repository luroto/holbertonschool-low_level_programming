#include "holberton.h"
/**
 *_isdigit - checks for digits
 *
 *@c: Stores the input
 *
 *Return: It's supposed to be 0
 *
 */
int _isdigit (int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
