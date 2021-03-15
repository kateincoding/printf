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
			format++;
			result += operator_printf(format[++i], list);
		}
			/*functions that search in structured list the operator and returns the function */
			/*step2: call the value with write(0) from fx and returned*/
        i++;
    }
	va_end(list);
	return (result);
}

/*
se replicara algo como el ejercicio 3 del ul project
cuando el i encuentre %c o %(x)
ftype op[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string}
	};

	va_list args;
	char *separators = "";
	unsigned int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == op[j].c[0])
			{
				printf("%s", separators);
				op[j].f(args);
				separators = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
    */