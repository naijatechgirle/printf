#include "main.h"

/**
 * _our_int - recursive function that takes on an integer
 *  in num as input
 *
 * @num: input
 *
 * Description - function that take on an integer and return
 * num as input
 *
 * return: void
 *
 */
void _our_int(int num)
{
	int h;

	if (num == 0)
		return;

	h = num / 10;

	_our_int(h);
	_putchar(num % 10 + '0');

	return;

}
