#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - to find uppercase letters
 * @c: character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
