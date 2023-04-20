#include "variadic_functions.h"

/**
 * print_numbers - followed by a new line
 * @n: is the number of integers passed to the function
 * @separator: is the string to be printed between numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list AP;

	va_start(AP, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(AP, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(AP);
}
