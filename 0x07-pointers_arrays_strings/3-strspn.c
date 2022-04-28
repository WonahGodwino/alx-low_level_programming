#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int j;

	while ((*s) != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				c++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
