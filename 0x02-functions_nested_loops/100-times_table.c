#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar("%d", i * j);
else
_putchar(", %d", i * j);
}
_putchar("\n");
}
}
