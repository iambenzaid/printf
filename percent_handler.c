#include "main.h"
/**
 * per_handler - Function that handle percent input
 * @ar: args
 * @a: Str
 * @b: Int
 * Return: 1
 */

int per_handler(va_list ar __attribute__((unused)), char *a, unsigned int b)
{
	buffer_handler(a, '%', b);
	return (1);
}
