#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, print_binary = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			print_binary++;
		}
		else if (!print_binary)
			_putchar('0');
	}
	if (print_binary)
		_putchar('0');
}
