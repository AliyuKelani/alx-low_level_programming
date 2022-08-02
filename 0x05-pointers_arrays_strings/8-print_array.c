#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: pointer to the array to be printed
 * @n: number of items to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
			printf(",");
	}
	printf("%c", 10);
}
