#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
		return (*s2 == '\0');
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
