#include "main.h"
/**
 * p_exc_string - prints exclusive string
 * @va: Varible
 * Return: number of characters
 */
int p_exc_string(va_list va)
{
	int a = 0, l = 0;
	int value;
	char *s;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		if (a; s[a] != '0'; a++)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			value = s[a];
			if (value < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + p_HEX_ext(value);
		}
		else
		{
			_putchar(s[a]);
			l++;
		}
	}
	return (l);
}
