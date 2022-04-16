#include "main.h"
#include <stdio.h>

/**
 * main - check the code for uppercase.
 *
 * Return: 1 if upper and zero if not.
 */
int main(void)
{
    char c;

    c = 'A';

    printf("%c: %d\n", c, _isupper(c));


    c = 'a';

    printf("%c: %d\n", c, _isupper(c));


    return (0);
}

