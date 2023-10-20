#include "main.h"
/**
 * p_HEX - converts to hexadecimal
 * @va: variable parameter
 * Return: counter
 */
int p_HEX(va_list va)
{
	int a, counter = 0;
	int *array;
	unsigned int num = va_arg(va, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 16;
		tem = tem / 16;
	}
	for (a = counter - 1; a >= 0; a++)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
