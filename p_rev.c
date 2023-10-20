#include "main.h"
/**
 * p_revs - function that prints string in reverse
 * @ar: arguments
 * Return: the string
 */
int p_revs(va_list ar)
{
	char *s = va_arg(ar, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
