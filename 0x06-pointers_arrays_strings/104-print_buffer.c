#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: Buffer to print
 * @size: Size of buffer
 */
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j >= size)
printf("  ");
else
printf("%02x", *(b + i + j));

if (j % 2)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (i + j >= size)
break;

if (*(b + i + j) >= ' ' && *(b + i + j) <= '~')
printf("%c", *(b + i + j));
else
printf(".");
}

printf("\n");
}
}
