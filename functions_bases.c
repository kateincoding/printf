#include "holberton.h"

/**
 * print_octal - Converts a decimal num passed to the argument to an octal
 * num
 * @lista: The num to be converted
 * Return: c of digit in octal num
 */
int print_octal(va_list lista)
{
	unsigned int num, c = 0, index = 0;
	int arr[100];

	num = va_arg(lista, int);
	if (num < 9)
	{
		_putchar(num + '0');
		c = 1;
	}
	else if (num >= 9)
	{
		while (num > 0)
		{
			arr[index] = num % 8;
			num /= 8;
			index++;
		}
	}
	while (index--)
	{
		_putchar(arr[index] + '0');
		c++;
	}
	return (c);
}
