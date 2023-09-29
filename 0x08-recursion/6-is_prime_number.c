#include "main.h"

/**
 * checkPrime - checks wherether the number is prime or not
 * @n: integer
 * @m: integer
 * Return: int
 */

int checkPrime(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (checkPrime(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - returns true if the number is prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (checkPrime(3, n));
	}
}
