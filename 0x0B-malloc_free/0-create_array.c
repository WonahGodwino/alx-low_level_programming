#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *memo;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		memo = malloc(sizeof(c) * size);

		if (memo == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			memo[i] = c;

			return (memo);
		}
	}
}
