#include "main.h"
/**
* char_len - function to calcule the lenght of a char
* @c: character or str
*
* Return: lenght of str
*/

int char_len(char *c)
{
	int i = 0;

	while (*(c + i))
		i++;
	return (i);
}
