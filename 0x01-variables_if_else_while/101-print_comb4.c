#include <stdio.h>
/**
 * main - main function
 * Return: 0(success)
 */
int main(void)
{
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9' ; hundreds++)
	{
	int tens = '0';

	for (tens = '0' ; tens <= '9' ; tens++)
	{
	int ones = '0';

	for (ones = '0' ; ones <= '9' ; ones++)
	{
		if (!((ones == tens) || (tens == hundreds) ||
					(tens > ones) || (hundreds > tens)))
		{
			putchar(hundreds);
			putchar(tens);
			putchar(ones);
			{
				if (!(ones == '9' && hundreds == '7' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
