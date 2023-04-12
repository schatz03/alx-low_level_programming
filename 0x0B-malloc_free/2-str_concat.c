#include<stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 *
 * @schatz03
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, nouri1, nouri2, nouri;
	char *result;

	nouri1 = nouri2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			nouri1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			nouri2++;
	}

	nouri = nouri1 + nouri2;
	result = (char *)malloc(sizeof(char) * (nouri + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < nouri1; i++)
		result[i] = s1[i];
	for (j = 0; j < nouri2; j++, i++)
		result[i] = s2[j];
	result[nouri] = '\0';

	return (result);

