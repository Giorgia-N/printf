#include "main.h"
/**
 * p_pointer - prints pointer
 * @va: value
 * Return: an integter
 */
int p_pointer(va_list va)
{
	void *p;
	char *s = "(nil)";
	int i, b;
	long int a;

	p = va_arg(va, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = p_hex_ext(a);
	return (b + 2);
}
