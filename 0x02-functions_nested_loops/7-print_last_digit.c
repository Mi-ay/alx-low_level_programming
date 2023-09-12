#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: parameter of a integer
 * Return: 0(success)
 */
int print_last_digit(int b)
{
	int k;

	k = b % 10;
	if (b < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
