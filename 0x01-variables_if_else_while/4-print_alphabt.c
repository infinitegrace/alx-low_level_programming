#include <stdio.h>
#include <ctype.h>
/*
 * main - code entry point.
 *Return: 0 if successful,another valid uf other wais.
 */
int main(void)
{
	int x;

	for(x = 'A';x <= 'Z'; x++)
	{
		if ((x != 'Q') && (x != 'E'))
		{
			putchar(tolower(x));
		}
	}
putchar('\n');
return (0);
}
