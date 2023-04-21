#include "variadic_functions.h"

/**
 * print_all - all arguments
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *seperator;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				j = 0;
				break;
			case 's':
				separator = va_arg(a_list, char*);
				if (separator == NULL)
					separator = "(nil)";
				printf("%s", separator);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
