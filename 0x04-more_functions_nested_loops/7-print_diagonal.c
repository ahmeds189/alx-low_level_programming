#include "main.h"

/**
 * print_diagonal - function that draws a print_diagonal line on the terminal.
 * @n: numbers of time the character \ to be printed.
 */
void print_diagonal(int n)
{
int len;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('\\');
}

_putchar('\n');
}