#include "main.h"
/**
 * print_i - prints integer
 * @ar: arguments
 * Return: number of characters
 */
int print_i(va_list, ar)
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
			x = x * 10;
			num = num / 10;
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
#include "main.h"
/**
 * print_d - prints decimals
 * @ar: arguments
 * Return: number of characters
 */
int print_d(va_list, ar)
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
			x = x * 10;
			num = num / 10;
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
