#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry block
 * Description: lowercase without q and e
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);

}
