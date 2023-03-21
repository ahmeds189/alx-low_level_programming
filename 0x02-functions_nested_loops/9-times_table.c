#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int i;

for (i = 0; i <= 9; i++)
_putchar("0 x %d = %d\n", i, i * 9);
}
