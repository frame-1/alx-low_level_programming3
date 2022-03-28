#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: the character
 * Return: NULL	
 * @s. NULL if char isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
