#include "main.h"

/**
 * puts_half - check the code.
 * @str: an input string.
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len, i, d;

	while (str[len] != '\n')
		len++;

	if (len % 2 == 0)
		d = len / 2;
	else
		d = (len + 1) / 2;

	for (i = d; i < len; i++)
		_putchar(str[i]);
_putchar('\n');
}
