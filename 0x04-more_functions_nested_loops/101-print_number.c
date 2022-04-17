#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -i;
		_putchar(i);
	}
	else
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
