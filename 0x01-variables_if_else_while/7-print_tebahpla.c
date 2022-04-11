#include <stdio.h>
/**
 * main - Entry point of our code
 * Return: 0 always for success
 */
int main(void)
{
int num;

for (num = 'z'; num >= 'a';num--)
{
	putchar(num);
}
putchar('\n');
return (0);
}
