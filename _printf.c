#include "holberton.h"

int validate_operator(char format)
{
	char operator[] = {'c', 's', 'd', 'i', 'o', 'R', '%', '\0'};
	int i = 0;

	while (operator[i])
	{
		if (operator[i] == format)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, result = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
			result += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				result += _putchar(format[i]);
			while (validate_operator(format[i]) == 0 && format[i] != '\n')
				i++;
			if (validate_operator(format[i]) == 1)
			{
				/*functions that search in structured list the operator and returns the function */
				result += select_function(format[i], list);
			}
			else
				result += _putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (result);
}
