#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main
 * Description: adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1 if error
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int x = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; i++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
