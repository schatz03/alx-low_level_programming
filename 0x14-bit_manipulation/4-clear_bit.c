#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num  of i
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (*n & 1L << index)
*n ^= 1L << index;
return (1);
if (index >= sizeof(n) * 8return (-1);
}
