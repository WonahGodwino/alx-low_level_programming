#include "main.h"
/**
 * _strspn - Function to search for pairs of strings
 * @s: strings to search
 * @accept: accepted strings
 * Return: Always 0 (Success) or n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s[j] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}
	return (n);
}
