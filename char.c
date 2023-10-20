#include "main.h"
/**
 * p_char - prints a charater
 * @a: arguments
 * Return: 1
 */
int p_char(va_list a)
{
	char s;

	s = va_arg(a, int);
	_putchar(s);
	return (1);
}
