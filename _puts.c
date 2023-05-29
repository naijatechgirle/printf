#include "main.h"
/**
 * _puts - main function that outputs string
 * @s: string to be printed
 *
 * Description: string to be printed this function takes a
 * null termainating string and outputs it
 *
 * Return: 0 on success
 */

int _puts(char *s)
{
	int hk = 0, i_val = 0;

	if (s)
	{
		while (s[hk] != '\0')
		{
			_putchar(s[hk]);
			i_val++;
		}
	}
	return (i_val);
}
