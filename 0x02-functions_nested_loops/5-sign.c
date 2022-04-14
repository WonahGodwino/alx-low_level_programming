#include "main.h"
/**
 *print_sign: check numbers
 *@n:number to check
 *Return 0 for 0 value, 1 for + and - for negative or 1 positive value
 */
int print_sign(int n)
/* print _sign: check numbers*/
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
