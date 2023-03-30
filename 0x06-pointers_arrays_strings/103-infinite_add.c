#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that the function will use to store the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i = 0, j = 0, k = 0, l = 0, m = 0;

  while (n1[i] != '\0')
    i++;
  while (n2[j] != '\0')
    j++;
  if (i > size_r || j > size_r)
    return (0);
  j--;
  i--;
  while (i >= 0 || j >= 0 || k)
  {
    if (i >= 0)
      l += n1[i--] - '0';
    if (j >= 0)
      l += n2[j--] - '0';
    if (l >= 10)
      k = 1;
    else
      k = 0;
    r[m++] = (l % 10) + '0';
    l /= 10;
  }
  if (m > size_r)
    return (0);
  r[m] = '\0';
  for (i = 0; i < m / 2; i++)
    k = r[i], r[i] = r[m - i - 1], r[m - i - 1] = k;
  return (r);
}
