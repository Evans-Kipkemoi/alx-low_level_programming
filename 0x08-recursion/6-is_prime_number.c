#include "main.h"

/**
 * primeFind - finds if a number is prime
 * @c: number to check
 * @d: the numbers to look through
 *
 * Return: Find if number is prime number or not
 */

int primeFind(int c, int d)
{
	if (c <= 1 || c % d == 0)
		return (0);
	else if (c == d)
		return (1);
	else if (c > d)
		primeFind(c, d + 1);

	return (1);
}

/**
 * is_prime_number - tells if prime number or not
 * @n: the number to check
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primeFind(n, 2));
}
