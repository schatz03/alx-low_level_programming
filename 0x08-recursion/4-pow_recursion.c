#include "main.h"
/**
 * _pow_recursion - power
 * @i:int
 * @j:int
 * Return:int
 */

int _pow_recursion(int i, int j)
{
	if (j < 0)
	{
		return (-1);
	}
	else if (j != 0)
		return (i * _pow_recursion(i, j - 1));

	else if (j == 0)
	{
		return (1);
	}
}
