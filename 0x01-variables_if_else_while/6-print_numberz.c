#include <stdio.h>
/**
 * main - entry point point of our code
 * Return: 0 always of success
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
	putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
