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
			if (format[i] == '%')
				result += _putchar(format[i]);
			result += operator_printf(format[i], list);
		}
			/*functions that search in structured list the operator and returns the function */
			/*step2: call the value with write(0) from fx and returned*/
        i++;
    }
	va_end(list);
	return (result);
}
