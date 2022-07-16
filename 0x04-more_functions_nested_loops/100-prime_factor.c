#include <stdio.h>
#include <math.h>

/**
 * isprime - checks if a number is prime
 *@n: number to check
 *
 * Return: 1 if prime else 0
 */

int isprime(long n)
{
	int i;

	for (i = 2; i <= (int)sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * nextprime - returns the next prime starting from n
 *@n: starting point for getting next prime
 *
 * Return: prime number
 */

int nextprime(int n)
{
	int i;

	if (n < 2)
		return (2);
	i = n + 1;
	if (i % 2 == 0)
		i++;
	while (isprime(i) != 1)
		i += 2;
	return (i);
}

/**
 * isdivisible - checks if a is divsible by b
 *@a: dividen
 *@b: divisor
 *
 * Return: 1 if divisible else 0
 */

int isdivisible(long a, int b)
{
	if ((a / b) * b == a)
		return (1);
	else
		return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int div = 2;
	long rem = 612852475143;

	while (isprime(rem) != 1 && rem > 1)
	{
		while (isdivisible(rem, div) != 1 && rem > div)
		{
			div = nextprime(div);
		}
		rem = rem / div;
	}
	printf("%ld\n", rem);
	return (0);
}
