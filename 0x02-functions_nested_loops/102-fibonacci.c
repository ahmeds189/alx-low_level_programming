#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
int i;
long int a = 1, b = 2, c;

printf("%ld, %ld", a, b);

for (i = 2; i < 50; i++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}

printf("\n");

return (0);
}
