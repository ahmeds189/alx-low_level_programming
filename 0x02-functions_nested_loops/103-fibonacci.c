#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0
 */
int main(void)
{
long int a = 1, b = 2, c, sum = 2;

while (b <= 4000000)
{
c = a + b;
if (c % 2 == 0)
sum += c;
a = b;
b = c;
}

printf("%ld\n", sum);

return (0);
}