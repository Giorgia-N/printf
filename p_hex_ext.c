#include "main.h"
/**
 * p_hex_ext - converts to hexadecimal
 * @num: variable parameter
 * Return: counter
 */
int p_hex_ext(unsigned long int num)
{
	long int a, counter = 0;
	long int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(long int) * counter);
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
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
