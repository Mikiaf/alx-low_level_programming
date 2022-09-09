include <stdio.h>

int main(void)
	int i;
	long l;
	char c;
	float f;
	long int li;
	long long int lli;


	printf("size of int:%lu.\n", (unsigned long)sizeof(i));
	printf("size of long:%lu.\n", (unsigned long)sizeof(l));
	printf("size of char:%lu.\n", (unsigned long)sizeof(c));
	printf("size of char:%lu.\n", (unsigned long)sizeof(f));
	printf("size of long int:%lu%lu.\n", (unsigned long)sizeof(li));
	printf("size of long long int:%lu%lu%lu.\n", (unsigned long)(sizeof(lli));
	
	return(0);
