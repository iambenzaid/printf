#include "main.h"
/**
* string_handler - Function that handle Str
* @arg: type for va_list
* @buffer: Str
* @buffer_size: Int
*
* Return: Int
*/

int string_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char *vl;
	unsigned int i = 0;
	char null_vl[] = "(null)";

	vl = va_arg(arg, char *);
	if (vl == 0)
	{
		while (null_vl[i])
		{
			buffer_size = buffer_handler(buffer, null_vl[i], buffer_size);
			i++;
		}
		return (6);
	}
	while (*(vl + i))
	{
		buffer_size = buffer_handler(buffer, vl[i], buffer_size);
		i++;
	}
	return (i);
}
