#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print the string in the puts function
*
* Description:using the main function
* this progarm print positive anything is better than negative nothing 
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n < 0)
	{
		printf("is positive");
	}
	else if (n > 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	return (0);
};
