#include "main.h"
/**
 * _strlen - length of the string
 * @str: string pinter
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
/**
 * _strlens - functon that applied for constant char pointer
 * @str: char pointer
 * Return: 1
 */
int _strlens(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
