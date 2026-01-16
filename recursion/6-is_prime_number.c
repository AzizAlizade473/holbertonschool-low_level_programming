#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 2));
}

/**
 * actual_prime - Helper function to check recursively if n is prime.
 * @n: The number to check.
 * @i: The iterator (current divisor).
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i + 1));
}
