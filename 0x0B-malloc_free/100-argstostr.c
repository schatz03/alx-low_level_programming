#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, nouri = 0;

	if (agrc == 0 || agrv == NULL)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		sum = argv[i];
		j = 0;

		while (sum[j++])
			nouri++;
		nouri++;
	}

	str = (char *)malloc(sizeof(char) * (nouri + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < argc && j < nouri; i++)
	{
		sum = argv[i];
		k = 0;

		while (sum[k])
		{
			str[j] = sum[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
