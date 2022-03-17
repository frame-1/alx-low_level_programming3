#include "main.h"

/**
 * _isdigit - checks that for a digit
 * @c: input
 * Return 1 if c is a digit,0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i ==c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
