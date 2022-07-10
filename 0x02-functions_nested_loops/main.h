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
 * print_alphabet - writes lowercase letters to stdout
 *
 * Return: nothing
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - writes lowercase letters 10 times to stdout
 *
 * Return: nothing
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a charater is a lower case letter or not
 * @c: the character to check
 *
 * Return: 1 if lower else 0
 */
int _islower(char c);

/**
 * _isalpha - checks if a charater is an alphabet
 * @c: the character to check
 *
 * Return: 1 if an alphabet else 0
 */
int _isalpha(char c);

/**
 * print_sign - prints the sign of a number
 * @i: the character whose sign it prints
 *
 * Return: 1 if i is +ve -1 if -ve else 0
 */
int print_sign(int i);

/**
 * _abs - returns the absolute value of a number
 * @i: the character whose absolute value is returned
 *
 * Return: absolute value of a number
 */
int _abs(int i);
#endif
