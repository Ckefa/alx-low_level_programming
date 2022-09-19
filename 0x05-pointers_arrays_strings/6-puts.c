#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Input string
 *ff
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int i = 0;

	while {str[i] != '\n')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
