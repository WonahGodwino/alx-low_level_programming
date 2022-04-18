#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry block
 * Description: print single digit numbers
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
