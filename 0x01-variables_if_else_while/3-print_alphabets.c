#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * Description: alphabets in lower and upper
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char x = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
