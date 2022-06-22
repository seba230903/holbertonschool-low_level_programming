#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Description: multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1 if error
 */
int main(int argc, char **argv)
{
	int i;
	int x = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		x *= atoi(argv[i]);
	printf("%d\n", x);
	return (0);
}
