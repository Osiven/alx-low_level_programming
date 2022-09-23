/**
 * _putchar - print character
 * @c: character to be printed
 *
 * Return: 0 or -1
 */
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
