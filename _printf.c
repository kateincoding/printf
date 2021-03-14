#include "lib_printf.h"

/**
 * _printf - Simulates the printf function
 * @format: Format to print to the console
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
    unsigned int i,
    va_list list;

    va_start(list, format);
    
    i = 0;
    while (format && format[i])
	{
        if (format[i] != '%')
            _putchar(format[i]);
		else
			
        i++;
    }
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