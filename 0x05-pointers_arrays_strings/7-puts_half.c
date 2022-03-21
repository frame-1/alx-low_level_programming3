#include "main.h"

/**
 * puts_half - check the code.
 * @str: an input string.
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (len % 2 == 0)
		d = count / 2;
	else
		d = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
