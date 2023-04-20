#include "variadic_functions.h"

/**
 * sum_them_all - sums all numbers
 * @n: the numbers of arguments
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int i;
	va_list AP;

	va_start(AP, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(AP, int);

	va_end(AP);

	return (s);
}
