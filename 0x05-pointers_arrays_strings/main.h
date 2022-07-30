#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - reset the value of an integer to 98
 * @*n: pointer to the integer to be reset
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swap the values of two integers
 * @a: pointer to the value to be swapped
 * @b: pointer to the value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @str: pointer to the string to be measured
 *
 * Return: lenght of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @strtr: pointer to the string to be printed
 *
 * Return: nothing
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @str: pointer to the string to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *str);

/**
 * rev_string - reverse a string
 * @str: pointer to the string to be printed to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed this way
 *
 * Return: nothing
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to be printed this way
 *
 * Return: nothing
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the string to array
 * @n: number of elements to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies to string dest from string src
 * @dest: destination string
 * @src: source string
 *
 * Return: source string pointer
 */
char *_strcpy(char *dest, char *src);
#endif