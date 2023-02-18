/*
 * main - Is n greater than 5, less than 6 or greater than 0
 * Return: return 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	int Lastdigit;
	Lastdigit = n % 10;

	if (Lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigit);
	}
	else if (Lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastdigit);
	}
	else (Lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigit);
	}

	return (0);
}
