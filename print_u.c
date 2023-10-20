#include "main.h"
/**
 * print_u - prints integer
 * @ar: arguments
 * Return: number of characters
 */
int print_u(va_list, ar)
{
	int n = va_arg(ar, int);
	int num, l = n % 10;
	int dig, x = 1, i = 1;

	n = n / 10;
	num = n;

	if (l < 0)
	{
		_putchar('0');
		num = -num;
		n = -n;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			x = x * num = num / 10;
		}
		num = n;
		while (x > 0)
		{
			dig = num / x;
			_putchar(dig + '0');
			num = num - (dig * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}
