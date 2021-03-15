#include "holberton.h"

/* Octavio, porfis completa la lista con los operadores que el proyecto nos pide
*/

/**
 * select_operator - structured list to work with it
 * @s_type: string with operators
 * @list: list of arguments to print
 */
int operator_printf(char format, va_list list)
{
    unsigned int i = 0, result = 0;

    f_type operator[] = {
        {'c', print_char},
        {'s', f_string},
        {'d', f_decimal}
		{'i', f_int},
        {'\0', 0}
	};
    while(operator[i].c)
    {
        if (format == operator[i].c)
        {
            operator[i].f(list);
            result++;
        }
    }
}
