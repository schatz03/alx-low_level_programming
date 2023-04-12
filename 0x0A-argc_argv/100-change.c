#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, count;
	unsigned int i;
	char *p
	int cent[] = {25, 10, 5, 2};
            
        if (argc !=2)
	{
	      printf("Error\n");
              return (1);
	}
         

        sum = strtol(argv[1], &p, 10);
	count = 0;

        if (!*p)
	{
		while (sum  > 1)
		{
			for (i = 0; i < sizeof(cent[i]); i++)
			{
				if (sum  >= cent[i])
				{
					count += sum  / cent[i];
					total = sum  % cent[i];
				}
			}
		}	
         if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
