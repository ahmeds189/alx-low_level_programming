#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is prime, otherwise 0
 * @n: number to check for primality
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: number to check for primality
 * @i: current divisor to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
