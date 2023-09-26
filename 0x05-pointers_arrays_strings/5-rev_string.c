#include "main.h"

/**
 * rev_string - reverses a string
 * @str: pointer to the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int i = 0, mid = 0, j = 0, k = 0;
	char tmp;

	while (*(str + i) != '\0')
	{
		i++;
	}
	mid = i / 2;
	while (j < mid)
	{
		tmp = *(str + j);
		k = i - j - 1;
		*(str + j) = *(str + k);
		*(str + k) = tmp;
		j++;
	}
}
