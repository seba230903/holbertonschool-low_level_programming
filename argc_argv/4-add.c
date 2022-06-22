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
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else if (argc == 2)
		printf("%s\n", "Error");
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
