#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%s \n", "8 is positive");
	else if (n == 0)
	{
		printf("%s \n", " is zero");
	}
	else (n < 0)
	{
		printf("%s \n", "-8 is negative");
	}
	n++;
	return (0);
}
