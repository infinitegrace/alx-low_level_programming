#include "main.h"
#include <unistd.h>
#include <stdio.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, 1 is returned, and error is set appropriately.
 */
int main(void)
{
	int A, res;

	res = _putchar('A');

	printf("%d", res);
	return (0);
}
