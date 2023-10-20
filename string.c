#include "main.h"
/**
 * _string - print a string
 * @a: argument
 * Return: the length of the string
 */
int _string(va_list a)
{
	char *s;
	int i;
	int l;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		s = "(null)";
		l = _strlen(s);
		for (i = 0; i < l; i++)
			_putchar(s[i]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (i = 0; i < l; i++)
			_putchar(s[i]);
		return (l);
	}
}
