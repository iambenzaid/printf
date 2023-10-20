#include "main.h"

/**
* char_handler - Charachters handler
* @arg: list of args
* @buffer: Str pointer
* @buffer_size: unsigned int
*
* Return: 1
*/
int char_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char value;

	value = va_arg(arg, int);
	buffer_handler(buffer, value, buffer_size);

	return (1);
}
