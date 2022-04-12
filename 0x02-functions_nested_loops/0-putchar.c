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
	int i = 0;
	char text[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
