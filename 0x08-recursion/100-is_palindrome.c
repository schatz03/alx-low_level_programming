#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: string to be printed
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * palindrome_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrome_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (palindrome_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: address for string
 *
 * Return: 1 if k is prime, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen_recursion(s) - 1));
}
