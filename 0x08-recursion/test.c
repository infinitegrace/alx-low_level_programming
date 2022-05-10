#include "main.h"

void _printstr(char *s){
	if (*s != '\0'){

		_putchar(*s);
		_printstr(s + 1);
	}
	else{
		_putchar('\n');
	}
}

int main(void)
{
	char *s;
	s = "I am happy";

	_printstr("I am happy");

}
