#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i<9; ++i)
		_putchar(name[i]);
	_putchar('\n');

	return (0);
}
