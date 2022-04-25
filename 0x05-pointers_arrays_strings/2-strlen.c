#include "main.h"

/**
 *_strlen - prints the string length
 *@s: function parameter
 *Return: lenghth
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
