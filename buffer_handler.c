#include "main.h"
/**
* buffer_handler - Function to andle buffer
* @buffer: Str
* @ch: char
* @buffer_size: unsigned Int
*
* Return: The size of buffer
*/
unsigned int buffer_handler(char *buffer, char ch, unsigned int buffer_size)
{
	if (buffer_size == 1024)
	{
		_putchar(buffer, buffer_size);
		buffer_size = 0;
	}
	buffer[buffer_size] = ch;
	buffer_size++;
	return (buffer_size);
}
