#include "main.h"
/**
 * _isalpha - chack for alphabetic character
 * Description: checks if is alphabetic character
 * @c: char to check
 * Return: 1 if alphabetic char, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
