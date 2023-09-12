#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: parameter of the sign number
 * Return: 1 or 0 or -1
 * Print: + or 0 or -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
