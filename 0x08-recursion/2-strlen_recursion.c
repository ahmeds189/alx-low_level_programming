#include "main.h"

/**
 * _strlen_recursion - returns a length of a string.
 * @s: string to be checked
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
  int len;
	if (*s == '\0')
		return;
	_strlen_recursion(s + 1);
  len = s;
  return len;
}
