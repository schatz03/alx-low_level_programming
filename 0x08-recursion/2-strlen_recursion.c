#include "main.h"
/**
 *_strlen_recursion-returns the length of string
 * @s:string
 * return: 0
 * retun :int
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
