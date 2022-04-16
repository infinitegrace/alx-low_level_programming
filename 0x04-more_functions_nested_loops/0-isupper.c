#include "main.h"
#include <ctype.h>

int _isupper(int c)
{
	int uppercase;

	uppercase = toupper(c);

	if (c == uppercase)
		return(1);
	else
		return (0);
}
