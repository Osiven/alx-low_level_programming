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

void *strrev(char str[])
{
	int n = strlen(str);

	for (int i = 0; i < n / 2; i++)
	{
		char ch = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = ch;
	}
}
