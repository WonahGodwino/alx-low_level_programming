#include "main.h"

/**
 * factorial - main - check the code
 * @n: number of factorial
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
