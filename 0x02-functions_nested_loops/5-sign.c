#include "main.h"

/**
 * print_sign - print the sign of a number.
 * @n: The number to be checked.
 * Return: 1 and print + if n is grater than 0, 0 and print 0 if n is 0, -1 and prints - if n is less than 0 
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return 1;
}
else if (n == 0)
{
putchar('0');
return 0;
}
else
{
putchar('-');
return -1;
}
}
