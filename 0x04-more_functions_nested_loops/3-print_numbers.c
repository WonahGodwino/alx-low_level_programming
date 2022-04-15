#include "main.h"
/**
 * print_numbers - Print numbers from 0 - 10
 * Follow by new line.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	-putchar(i + '0');
	}
_putchar('\n');
}
