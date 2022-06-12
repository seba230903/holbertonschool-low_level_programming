#include <stdio.h>
/**
 * main - main
 * Description: prints from 1 to 100
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
		{
			if (a % 3 == 0)
				printf("Fizz");
			if (a % 5 == 0)
				printf("Buzz");
			if (a % 3 != 0 && a % 5 != 0)
				printf("%d", a);
		}
		if (a != 100)
			printf(" ");
	}
	putchar(10);
	return (0);
}
