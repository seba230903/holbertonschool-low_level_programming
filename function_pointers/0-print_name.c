#include "function_pointers.h"
/**
 * print_name - print name
 * Description: prints a name
 * @name: name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name)
}
