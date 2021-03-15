#include "holberton.h"

/* Octavio, porfis cambia el nombre de las fx en base a las fx que estas creando
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
            result =+ operator[i].f(list);
            break;
        }
        i++;
    }
    return (result);
}
