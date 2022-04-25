#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int i, j;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
