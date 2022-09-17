#include <stdio.h>
/**
 * main - print Fizz-Buzz
 * i: int
 *
 * Return:0
 */
int main(void)
{
	int i = 1;

	while (i++ < 100)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%c", i);
		}
	}
	return (0);
}
