#include "main.h"

/*
 * put_recursion - print a string 
 * @s:string
 *Return void
 */
void _puts_recursion.c(char *s);
{
	if (*s =="\0")
	{
		_putchar("\n");
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}

