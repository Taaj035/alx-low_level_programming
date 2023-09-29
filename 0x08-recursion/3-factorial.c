#include "main.h"
/**
 * factorial - calculates factorial of n
 * @n: an integer
 * Return: 1 0n succes
 * On error, -1 is returned, and error is set.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
