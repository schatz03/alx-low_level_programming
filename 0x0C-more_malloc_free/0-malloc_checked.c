#include "main.h"

/**
 * malloc_checked - cause normal process termination with k  status value of 98
 *
 * @b: allocated memory
 * @schaz03
 * Return: k  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);

}
