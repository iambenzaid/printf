#include "main.h"

/**
* integer_handler - Function that handle Int
* @arg_list: Argument list of type va_list
* @buffer: Str
* @buf_size: unsigned Int
*
* Return: Int
*/
int integer_handler(va_list arg_list, char *buffer, unsigned int buf_size)
{
	int j, i;
	char div;
	unsigned int neg, num, div_num = 1, integer;
	int value = va_arg(arg_list, int);

	j = value;
	neg = 0;
	if (j < 0)
	{
		integer = -1 * value;
		buf_size = buffer_handler(buffer, '-', buf_size);
		neg = 1;
	}
	else
	{
		integer = value;
	}

	num = integer;
	while (num > 9)
	{
		div_num *= 10;
		num /= 10;
	}

	for (i = 0; div_num > 0; i++)
	{
		div = ((integer / div_num) % 10) + '0';
		buf_size = buffer_handler(buffer, div, buf_size);
		div_num /= 10;
	}

	return (i + neg);
}
