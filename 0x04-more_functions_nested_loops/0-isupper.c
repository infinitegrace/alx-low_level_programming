#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 *int c -  parameter for _isupper.
 *Return: 0 Always
 */

/*c - my function parameter */

int _isupper(int c)
{
	int uppercase;

	uppercase = toupper(c);

	if (c == uppercase)
		return (1);

	else
		return (0);
}
