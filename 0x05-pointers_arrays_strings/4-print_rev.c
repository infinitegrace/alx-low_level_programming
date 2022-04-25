#include "main.h"
#include <stdio.h>

/**
 *print_rev - printing string in reverse
 *@s:-function parameter
 */

void print_rev(char *s)
{
	int i;
	int maxl;

	for (maxl = 0; s[maxl] != '\0'; maxl++)
	{
	}
	for (i = maxl - 1; i > 0; --i)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
