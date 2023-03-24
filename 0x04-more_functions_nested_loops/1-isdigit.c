#include "main.h"

/**
 * _isdigit - Checks if a input is digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is upercase, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
