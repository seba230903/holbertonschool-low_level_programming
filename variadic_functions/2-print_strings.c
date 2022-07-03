#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * Description: prints strings, followed by a new line
 * @separator: char
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(args, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator)
				printf("%s", separator);
		}
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
}
