#include <stdio.h>
/**
 * main - main
 * Description: prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
