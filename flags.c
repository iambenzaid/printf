#include "main.h"

/**
* flags - Flags function
* @s: Str
* @idx: Int
*
* Return: Int
*/
int flags(const char *s, int idx)
{
	opt pr[] = {
		{"c", char_handler},
		{"s", string_handler},
		{"d", integer_handler},
		{"i", integer_handler},
		{"b", binary_handler},
		{"%", per_handler},
		{NULL, NULL}
	};
	int i = 0, cmp = 0, f_idx;

	f_idx = idx;
	while (pr[i].flag)
	{
		if (s[idx] == pr[i].flag[cmp])
		{
			if (pr[i].flag[cmp + 1] != '\0')
			{
				idx++;
				cmp++;
			}
			else
				break;
		}
		else
		{
			cmp = 0;
			i++;
			idx = f_idx;
		}
	}
	return (cmp);
}
