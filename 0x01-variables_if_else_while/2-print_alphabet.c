#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point of code
 * Return: 0 if successful any value if otherwise
 */
int main(void)
{
int x;

for (x = 'A'; x <= 'Z'; x++)
/* jumps from 'A'(65) to 'B'(66) to ... in order*/
{
	putchar(tolower(x));
/*the return value is returned as a parameter */
}
putchar('\n');
return (0);
}
