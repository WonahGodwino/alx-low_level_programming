#include "main.h"
/**
* print_rev - prints a string in reverse
*@s: string to reverse
*Return: Nothing
*/
void print_rev(char *s)
{
	int strpointer;

	strpointer = 0;
	while *((s + strpointer != '\0'))
	{
		strpointer++;
	}
	strpointer--;
	for (; strpointer >= 0; strpointer--)
	{
		_putchar(*(s + strpointer));
	_putchar('\n');
	}
}
