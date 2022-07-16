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
 * _isupper - checks if a character is an upper case aplhabet
 *@c: charater to check
 *
 * Return: 1 if upper else 0
 */
int _isupper(int c);

/**
 * _isdigit - checks if a character is a digit 0-9
 *@c: charater to check
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c);

/**
 * mul - multiplies two numbers
 *@a: mutiplend
 *@b: multiplier
 *
 * Return: product of @a and @b
 */
int mul(int a, int b);

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: nothing
*/
void print_numbers(void);

/**
 * print_most_numbers - print numbers 0 - 9 except 2 and 4
 *
 * Return: nothing
*/
void print_most_numbers(void);

/**
 * more_numbers - print numbers 0 - 14 10 times
 *
 * Return: nothing
*/
void more_numbers(void);

/**
 * print_line - print a line with '_' n times
 *@n: indicates the number of '_' to print
 *
 * Return: nothing
*/
void print_line(int n);

/**
 * print_diagonal - prints a diagonal line with '\' n times
 *@n: indicates the number of diagonal to print
 *
 * Return: nothing
*/
void print_diagonal(int n);

/**
 * print_square - print a square with '#' of size n
 *@n: denotes the size of the square to print
 *
 * Return: nothing
*/
void print_square(int n);

/**
 * print_triangle - prints a right angle triangle using #  of size n
 *@n: denotes the size of the triangle to print
 *
 * Return: nothing
*/
void print_triangle(int n);

/**
 * print_number - prints an integer
 *@n: denotes the integer to print
 *
 * Return: nothing
*/
void print_number(int n);

#endif
