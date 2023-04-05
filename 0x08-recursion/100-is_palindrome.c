#include "main.h"

/**
 * is_palindrome - returns 1 if string is palindrome, otherwise 0
 * @s: string to check for palindromicity
 *
 * Return: 1 if s is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (palindrome_helper(s, len));
}

/**
 * palindrome_helper - helper function for is_palindrome
 * @s: string to check for palindromicity
 * @len: length of s
 *
 * Return: 1 if s is palindrome, otherwise 0
 */
int palindrome_helper(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	if (len <= 1)
		return (1);
	return (palindrome_helper(s + 1, len - 2));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
