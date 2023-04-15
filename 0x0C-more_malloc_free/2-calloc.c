#include "main.h"

/**
 *_calloc function allocates memory for an array of nmemb elements of 
  size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: nmemb or size is 0, then _calloc returns NULL
  If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; b < (nmemb * size); j++)
		i[j] = 0;
	return (i);
}
