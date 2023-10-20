#ifndef MAIN.H
#define MAIN.H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list a);
int _string(va_list a);
int _strlen(char *str);
int _strlens(const char *str);
int print_p(void);
int print_i(va_list, ar);
int print_d(va_list, ar);
int binary(va_list val);
int print_u(va_list, ar);
int p_octal(va_list va);
int p_hex(va_list va);
int p_HEX(va_list va);
int p_HEX_ext(unsigned int num);
int p_exc_string(va_list va);
int p_pointer(va_list va);
int p_hex_ext(unsigned long int num);
int p_revs(va_list ar);
int p_rot(va_list ar);
#endif
