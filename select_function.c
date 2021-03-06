#include "holberton.h"

/**
 * select_function - structured list to work with it
 * @format: string with operators
 * @list: list of arguments to print
 * Return: numbers of char printed
 */
int select_function(char format, va_list list)
{
	unsigned int i = 0, result = 0;

	f_type operator[] = {
			{'c', print_char},
			{'s', print_str},
			{'d', print_int},
			{'i', print_int},
			{'u', print_unsigned},
			{'o', print_octal},
			{'x', print_hex},
			{'X', print_HEX},
			{'b', print_bin},
			{'S', print_Str_Ascii},
			{'r', print_rev_str},
			{'R', print_rot13},
			{'\0', NULL}};
	while (operator[i].c)
	{
		if (format == operator[i].c)
		{
			result += operator[i].f(list);
			break;
		}
		i++;
	}
	if (result == 0)
		return (0);
	return (result);
}
