#include "function_pointers.h"

/**
  * int_index - search for integer
  * @array: the int array
  * @size: size thz array
  * @cmp: the compare func
  *
  * Return: the integer index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
