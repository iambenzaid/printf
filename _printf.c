#include "main.h"
/**
* _printf - The printf function
* @format: Pointer char
*
* Return: len
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, sizebf = 0;
	va_list args;
	int (*handler)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format);
	 buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				_putchar(buffer, sizebf), free(buffer), va_end(args);
				return (-1);
			}
			else
			{	handler = get_handler(format, i + 1);
				if (handler == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					buffer_handler(buffer, format[i], sizebf), len++, i--;
				}
				else
					len += handler(args, buffer, sizebf), i += flags(format, i + 1);
			} i++;
		}
		else
			buffer_handler(buffer, format[i], sizebf), len++;
		for (sizebf = len; sizebf > 1024; sizebf -= 1024)
			;
	}
	_putchar(buffer, sizebf);
	 free(buffer), va_end(args);
	return (len);
}
