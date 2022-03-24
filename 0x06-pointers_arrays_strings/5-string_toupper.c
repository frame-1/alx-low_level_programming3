#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 *                    of a strint to uppercase
 * @s: input string
 * Return: to s.
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
