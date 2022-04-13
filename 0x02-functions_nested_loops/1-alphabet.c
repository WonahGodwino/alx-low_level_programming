 #include "main.h"
/**
 * print-alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
/* declaration after main*/
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
