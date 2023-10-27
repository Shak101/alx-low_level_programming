#include "main.h"

/**
 * _pow - calculates the value of (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
		result *= base;

	return (result);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	char flag = 0;

	while (divisor != 0)
	{
		unsigned long int check = n & divisor;

		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
