#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: pointer to where the array is stored
 * @n: number of elenents to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));

		if (i <= (n - 2))
			printf(", ");
	}
	printf("\n");
}
