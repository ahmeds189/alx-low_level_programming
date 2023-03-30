#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result cannot be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l1, l2, sum;
char tmp;

for (l1 = 0; n1[l1]; l1++)
;
for (l2 = 0; n2[l2]; l2++)
;

if (l1 > size_r || l2 > size_r)
return (0);

for (i = l1 - 1, j = l2 - 1, k = 0, sum = 0; i >= 0 || j >= 0 || sum; i--, j--, k++)
{
sum += (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
r[k] = (sum % 10) + '0';
sum /= 10;
}

r[k] = '\0';

for (i = 0, j = k - 1; i < j; i++, j--)
{
tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}

return (r);
}
