#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: pointer to the given number
 *
 * Return: factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
