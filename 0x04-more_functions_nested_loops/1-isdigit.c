#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: a character or digit
 * Return: 0 or 1 depending on the result
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
