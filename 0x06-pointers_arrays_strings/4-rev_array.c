#include "main.h"
/**
 * rev_array - reverses content of array
 * @a: array
 * An: number of elemsmt in array
 * Return: no
 */

void rev_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
