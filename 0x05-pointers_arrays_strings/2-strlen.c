#include "main.h"

/**
 * _strlen - check code.
 * @s: input string.
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
