#include "main.h"

/**
*_putchar - The function to print char
*@buffersize: Size of the buffer
*@buffer: Str
*
*Return: An Int
*/

int _putchar(char *buffer, int buffersize)
{
	return (write(1, buffer, buffersize));
}
