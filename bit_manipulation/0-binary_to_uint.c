#include "main.h"
/**
 * binary_to_uint - turns binary to decimal
 * Description: converts a binary number to an unsigned int
 * @b: pointer
 * Return:the converted number, or 0 if, there is
 * one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;
	unsigned int base = 1;

	if (!b)
		return (0);
	while (b[i])
		i++;/*string length*/
	while (i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);/*if content is not 0 nor 1*/
		if (b[i] == '1')
			num = num + base;
		base = base * 2;/*2 for binary*/
	}
	return (num);
}
