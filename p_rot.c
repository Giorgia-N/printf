#include "main.h"
/**
 * p_rot - convert to rot
 * @ar: arguments
 * Return: counter
 */
int p_rot(va_list ar)
{
	int l, m, counter = 0;
	int k = 0;
	char *s = va_arg(ar, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"}

	if (s == NULL)
		s = "null";
	for (l = 0; s[l]; l++)
	{
		k = 0;
		for (m = 0; a[m] && !k; m++)
		{
			if (s[l] == a[m])
			{
				_putchar(b[m]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[l]);
			counter++;
		}
	}
	return (counter);
}
