#include "main.h"
/**
 *prin_sing check numbers
 *@n:number to check
 *Return 0 or 1
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
