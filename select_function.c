#include "holberton.h"

/**
 * select_operator - structured list to work with it
 * @s_type: string with operators
 * @list: list of arguments to print
 */
int select_function(char format, va_list list)
{
    unsigned int i = 0, result = 0;

    f_type operator[] = {
        {'c', print_char},
        {'s', print_str},
    /*  {'%', print_percent},*/
        {'d', print_unsigned},
		{'i', print_int},
        {NULL, NULL}
	};
    while(operator[i].c)
    {
        if (format == operator[i].c)
        {
            result += operator[i].f(list);
            break;
        }
        i++;
    }
    return (result);
}
