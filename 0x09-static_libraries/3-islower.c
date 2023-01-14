#include "main.h"
/**
 * _islower - checks if a character is lowercae if YES it regturns 1
 * otherwise returns 0 just like islower() function in ctypr.h
 * @c: is the int value to be compared with the ASCII value
 * Return: 0 if successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
