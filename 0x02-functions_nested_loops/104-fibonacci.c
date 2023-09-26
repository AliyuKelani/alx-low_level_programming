#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
*        followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long a, b, c, ra, rb, rc, da, db, dc, l;
	short crossed;

	count = 2;
	l = 1000;
	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	crossed = 0;
	while (count < 98)
	{
		if (crossed == 1)
		{
			rc = (ra + rb) % l;
			dc = (da + db) + ((ra + rb) / l);
			if (rc > 0)
				printf("%lu%lu", dc, rc);
			else
				printf("%lu", dc);
			ra = rb;
			rb = rc;
			da = db;
			db = dc;
		}
		else
		{
			c = a + b;
			printf("%lu", c);
			a = b;
			b = c;
			if (c > l)
			{
				crossed = 1;
				ra = a % l;
				da = a / l;
				rb = b % l;
				db = b / l;
			}
		}

		if (count == 97)
			printf("\n");
		else
			printf(", ");

		count++;
	}
	return (0);
}
