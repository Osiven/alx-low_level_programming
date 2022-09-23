/**
 * print_rev - Print string in reverse
 * @s: the name of the string array
 * @lgt: lenght of array
 * @i: variable for looping
 *
 * Return: Always zero.
 */
#include "main.h"

void print_rev(char *s)
{
	int lgt = _strlen(s);
	int i;

	if (lgt == 1)
		printf("%s\n", s);
	else
	{
		for (i = lgt; i >= 0; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
}
