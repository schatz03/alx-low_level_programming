#include "function_pointers.h"

/**
 * print_name - func prints a name.
 * @name: the string name given
 * @f: function pointer of a name
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
