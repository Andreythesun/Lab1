#include <stdio.h>

int
main()
{
	int a, b = 0, c = 1, q;
	printf("Input a number in the decimal system to translate it into the Q number system:\n");
	scanf("%d", &a);
	printf("Input DIGIT CAPACITY you need (from 1 to 10):\n");
	scanf("%d", &q);
	if ((0 >= q) || (q > 10))
	{
		printf("\nError! Digit capacity must be a NATURAL NUMBER not bigger than 10\n");
		return 1;
	}
	if (a >= 0)
	{
		while (a >= q)
		{
			b = b + ((a % q) * c);
			c = c * 10;
			a = a / q;
		}
		printf("\nYour number in %d digit system is %d\n", q, (b + (a * c)));
	}
	else
	{
		while (a <= -q)
		{
			b = b - ((a % q) * c);
			c = c * 10;
			a = a / q;
		}
		printf("\nYour number in %d digit system is -%d\n", q, (b - (a * c)));
	}
	return 0;
    
	
}