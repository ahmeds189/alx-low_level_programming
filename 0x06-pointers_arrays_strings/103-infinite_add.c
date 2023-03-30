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
  char tmp;

  while (n1[i] != '\0')
    i++;
  while (n2[j] != '\0')
    j++;
  if (i + 2 > size_r || j + 2 > size_r)
    return (0);
  r[size_r - 1] = '\0';
  for (k = i - 1, l = j - 1; k >= 0 && l >= 0; k--, l--, m++)
  {
    tmp = n1[k] + n2[l] - '0' + r[m];
    if (tmp > '9')
    {
      r[m + 1] += 1;
      tmp -= 10;
    }
    r[m] = tmp;
  }
  for (; k >= 0; k--, m++)
  {
    tmp = n1[k] + r[m];
    if (tmp > '9')
    {
      r[m + 1] += 1;
      tmp -= 10;
    }
    r[m] = tmp;
  }
  for (; l >= 0; l--, m++)
  {
    tmp = n2[l] + r[m];
    if (tmp > '9')
    {
      r[m + 1] += 1;
      tmp -= 10;
    }
    r[m] = tmp;
  }
  if (r[m - 1] == '0')
    r[m - 1] = '\0';
  else if (m >= size_r)
    return (0);
  else
    r[m] = '\0';
  for (i = 0, j = m - 1; i < j; i++, j--)
  {
    tmp = r[i];
    r[i] = r[j];
    r[j] = tmp;
  }
  return (r);
}
