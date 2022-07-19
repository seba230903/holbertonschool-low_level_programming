#include "main.h"
/**
 * clear_bit - sets value of bit to 0
 * Description: sets the value of a bit to 0 at a given index
 * @n: int
 * @index: int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(8) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
