#include "main.h"
/**
 * _print_rev_recursion - Print string in reverse using recursive function
 * @s: string to be printed in reverse.
 * return 0: always
 */
void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(*s + 1);
		_putchar(*s);
	}
}
