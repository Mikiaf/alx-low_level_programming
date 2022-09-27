#include "main.h"
/**
 * print_chessboard - print a character
 * @a: arrye
 * i:int
 * j:int
 * m:int
 * char:string
 *
 * Return:null
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int m;
	char s;

	m = sizeof(*a) / sizeof(a[0]) - 1;
	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			s = a[i][j];
			_putchar(s);
		}
		_putchar('\n');
	}
}
