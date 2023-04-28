#include "lists.h"

void myStartupFun(void) __attribute__ ((constructor));

/**
 * constructor - start before main.
 * 
 * Return: text.
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
