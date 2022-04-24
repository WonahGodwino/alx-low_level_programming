#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
