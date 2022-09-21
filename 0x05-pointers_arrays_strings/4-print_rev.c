/**
 * print_rev - Print string in reverse
 * @s: the name of the string array
 *
 * Return: Always zero.
 */
#include <stdio.h>
#include <string.h>
#include "main.h"

void print_rev(char *s)
{
	strrev(s);
}

char *strrev(char *str)
{
	char *p1, *p2;

	if (! str || ! *str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}
