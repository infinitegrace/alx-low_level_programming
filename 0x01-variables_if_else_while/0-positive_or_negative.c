#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point of our code
 * Return: 0 if exited successfully,any other value if otherwise.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is positve \n",n);
	}
	else if (n<0)
	{
		printf("%d is negative \n", n);
	}
	else
	{
		printf("%d is zero \n",n);
	}
	return (0);
}