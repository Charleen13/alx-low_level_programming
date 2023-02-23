#include "main.h"

/**
 * print_last_digit -function that prints last digit
 *
 * @t: function parameter
 *
 * Return: c
 */

int print_last_digit(int t)
{
	int c;

	c = t % 10;
	if (t < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
