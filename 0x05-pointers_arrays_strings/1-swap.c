/**
 * swap_int - swaps the values of variables
 * @a: first variable
 * @b: second variable
 *
 * Return: Always zero
 */
#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
