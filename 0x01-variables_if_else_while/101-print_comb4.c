#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int j, i;

	for (j = 0; j <= 13; j++)
	{
		for (i = j; i <= 39; i++)
		{
			if (i != j && j != 0)
			{

				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(i % 10 + 48);

				if (j * 100 + i != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
