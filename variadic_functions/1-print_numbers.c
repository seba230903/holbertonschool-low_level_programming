#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * Description: prints numbers, followed by a new line
 * @separator: char
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
				printf("%d", va_arg(args, int));
			printf("\n");
		}
		else
		{
			for (i = 0; i < n - 1; i++)
				printf("%d%s", va_arg(args, int), separator);
			printf("%d\n", va_arg(args, int));
		}
		va_end(args);
	}
	else
		printf("\n");
}
