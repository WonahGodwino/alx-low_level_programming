#include "main.h"
/**
 * primeno - Second function
 * @n: number to be checked
 * Return: 1 or 0
*/
int primeno(int n)
{
	if ((n % 3) > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
/**
 * is_prime_number - Functiond to check for prime number
 * @n: number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 3)
	{
	return (1);
	}
	else
	if(n == 1)
	{
	return (0)
	}
	else
	if (n % 2 == 0)
	{
	return (0);
	}
	else
	{
	return (primeno(n));
	}
}
