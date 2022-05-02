#include "main.h"
/**
 * _strpbrk - Function search for any set of bytes
 * @s: string to be searched
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s++)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	}

return (0);
}
