#include "main.h"
/**
 * _printf - mimics printf
 * @format: identifier look
 * Return: integer
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%b", binary.c}, {"%%", print_p.c}, {"%c", char.c}, {"%o", octal.c}, {"%p", pointer.c}, {"%i",  print_str.c}, {"%x", hex.c}, {"%S", p_exc_string.c} {"%r", p_rev.c}, {"%u",  print_u.c}, {"%s", string.c}, {"%X", HEX.c}, {"%d", print_id.c}, {"%R", p_rot.c}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] = '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}

