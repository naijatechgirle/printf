#include "main.h"
/**
 * _putchar - prints first character
 * @z: character to print
 *
 * Description - function to use stdio and prints first
 * character while pointing to z
 *
 * Return: 0 on success
 */

int _putchar(char z)
{
	return (write(1, &z, 1));
}
