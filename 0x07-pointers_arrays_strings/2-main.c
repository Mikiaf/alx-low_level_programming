#include "main.h"
#include <stdio.h>
int main()
{
	char *s = "hello";
	 char *f;
	 f = _strchr(s, 'l');
	 printf("%s", f);
	 return (0);
}
