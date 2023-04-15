#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range 
 *
 * Return: he pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *P;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	P = malloc(sizeof(int) * size);

	if (P == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		P[j] = min++;

	return (P);
}
