#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: an integar
 * Return: 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
