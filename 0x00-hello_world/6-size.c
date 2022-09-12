/**
 * main - program to print size of various data types
 * @char-Type: First data type
 * @int-Type: Second data type
 * @L-intType: Third data type
 * @LL-intType: Fourth data type
 * @float-Type: Fifth datatype.
 *
 * Return: Print five statements.
 */
#include <stdio.h>
int main(void)
{
	char charType;
	int intType;
	long int L_intType;
	long long int LL_intType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(L_intType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(LL_intType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
