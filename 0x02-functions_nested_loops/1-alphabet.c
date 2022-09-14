#include "main.h"

/**
 * my project
 *
 * print_alphabet - print the alphabets
 *
 * Return 0.
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
