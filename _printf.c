#include "holberton.h"

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
		return(-1);

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
			else if (format[i] == '%')
				result += _putchar(format[i]);
			else
				/*functions that search in structured list the operator and returns the function */
				result += select_function(format[i], list);
		}
        i++;
    }
	va_end(list);
	return (result);
}
