#include "main.h"
/**
 * jack_bauer - print timr
 *
 * Return : 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int hr;
	int mr;

	while (h <= 23)
	{
		while (m <= 59)
		{
	 		av
			hr = h % 10;
			_putchar(h / 10 + '0');
		 	_putchar(hr + '0');
			_putchar(':');
			-putchar(m / 10  + '0');
			_putchar(mr + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}

