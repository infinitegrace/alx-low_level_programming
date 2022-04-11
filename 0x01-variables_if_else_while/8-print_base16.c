#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 alwas if success
 */
int main(void)
{
int x;
char letter;

for (x = 0; x < 10; x++)
{
	putchar((x % 16) + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}

