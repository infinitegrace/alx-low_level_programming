#include <stdio.h>
/**
 * main - entry point of code
 * Return: 0 if exit success 1 if fail
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
	putchar((i%10)+'0');
}
putchar('\n');
return (0);
}
