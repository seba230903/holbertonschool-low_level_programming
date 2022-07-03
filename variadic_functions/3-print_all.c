#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned long int i = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				i++;
				continue;
		}
		if (i != (strlen(format) - 1))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
