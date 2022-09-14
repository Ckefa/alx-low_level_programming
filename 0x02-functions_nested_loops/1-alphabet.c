#include "main.h"

/**
 * print_alphabet - print the alphabets
 *
 *Description: prints 10 times the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
