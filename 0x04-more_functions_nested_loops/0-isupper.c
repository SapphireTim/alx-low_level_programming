#include "main.h"

/**
 * _isupper - checks if a character is upper case or not
 * @c: character to be tested
 * Return: 1 wether it is, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

