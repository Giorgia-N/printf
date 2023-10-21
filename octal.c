#include "main.h"
/**
 * p_octal - converts to octal
 * @va: variable parameter
 * Return: counter
 */
int p_octal(va_list va)
{
	int a, counter = 0;
	int = *array;
	unsigned int num = va_arg(va, unsigned int);
	unsigned int tem = num;

	while(num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 8;
		tem = tem / 8;
	}
	for (a = counter - 1; a >= 0; a--)
	       _putchar(array[a] + '0');
	free (array);
	return(counter);
}
