#include "main.h"
/**
* is_prime_number - Function to check for prime number
* @num: number to be checked
* Return: 1 or 0
*/
int primeno(int n, int i)
{ 
    if (n / i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	if (n % 2 == 0)
	{
		return (0);
	}
       else
	{
         	return primeno(n, 2);
	}
}
