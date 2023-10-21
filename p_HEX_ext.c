#include "main.h"
/**
 * p_HEX_ext - converts to hexadecimal
 * @num: variable parameter
 * Return: counter
 */
int p_HEX_ext(unsigned int num)
{
	int a, counter = 0;
	int *array;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
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
