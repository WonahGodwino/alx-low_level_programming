#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: is the int that will be use for the function argument
 * Return: integer value
 */
int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
