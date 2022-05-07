#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function to returns a pointer to a newly allocated space in memory
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			strout = (char *malloc(sizeof(char) * (j + 1)));
		}

		if (strout == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= j; i++)
			{
				strout[i] = str[i];
			}
			return (strout);
		}
	}
}
