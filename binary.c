#include "main.h"
/**
 * binary - convert to binary
 * @val: argument
 * Return: integer
 */
int binary(va_list val)
{
	int f = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (a = 0; a < 32; a++)
	{
		p = ((b << (32 - a)) & num);
		if (p >> (31 - a))
			f = 1;
		if (f)
		{
			c = p >> (31 - a);
			_putchar(c + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
