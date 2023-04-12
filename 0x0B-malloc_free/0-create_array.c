#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @c: value initial
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array, or NULL if it fails
 * @schatz03
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
