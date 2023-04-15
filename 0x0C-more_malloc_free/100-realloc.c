#include<stdlib.h>
#include"main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *Return: pointer allocate new size memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (a);
}
