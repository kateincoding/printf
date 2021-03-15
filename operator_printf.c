#include "holberton.h"

/* Octavio, porfis completa la lista con los operadores que el proyecto nos pide
*/

/**
 * select_operator - structured list to work with it
 * @s_type: string with operators
 * @list: list of arguments to print
 */
int operator_printf(char s_type, va_list list)
{
    f_type operator[] = {
		{'c', f_char},
        {'s', f_string},
        {'d', f_decimal}
		{'i', f_int},
        {'\0', 0}
	};
}   