#include "main.h"
/**
 *_strlen_recursion - Recursive function to find the length of a string
 * @s: string to find its length by recursion
 * return: Always return length
 */

int _strlen_recursion(char *s)
{

	if (*(s) != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
