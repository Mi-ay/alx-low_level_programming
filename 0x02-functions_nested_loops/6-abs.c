#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: parameter of an integer
 * Return: 0(success)
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
