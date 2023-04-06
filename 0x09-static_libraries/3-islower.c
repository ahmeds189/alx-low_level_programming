#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * Return: 1 if character is lowercase, else return 0
 * @c: The character to be checked.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
