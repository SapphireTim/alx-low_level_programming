#include "main.h"

/**
 * _isdigit - checks for a digit (0-9),
 * @c: is the number to be checked
 * return: 1 if the number is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
