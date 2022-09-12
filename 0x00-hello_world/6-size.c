#include <stdio.h>
/**
* main-print the string in the function
*
* Description:using the main function
* this program print "f
* Return: 0
*/
int main(void)
{
	int i;
	long l;
	char c;
	float f;
	long  li;
	long long  lli;


	printf("size of int:%ld.\n",sizeof(i));
	printf("size of long:%ld.\n", sizeof(l));
	printf("size of char:%ld.\n", sizeof(c));
	printf("size of char:%ld.\n", sizeof(f));
	printf("size of long int:%ld.\n", sizeof(li));
	printf("size of long long int:%ld.\n", sizeof(lli));
	return(0);
}
