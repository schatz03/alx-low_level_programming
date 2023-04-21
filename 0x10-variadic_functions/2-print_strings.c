#include "variadic_functions.h"

/**
 * print_strings -f ollowed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list AP;

	va_start(AP, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(AP, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(AP);
}
