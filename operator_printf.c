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
        {'c', print_char},
        {'s', f_string},
<<<<<<< HEAD
        {'d', f_decimal}
		{'i', f_int},
        {'\0', 0}
	};
}   
=======
        {'d', f_decimal} {'i', f_int},
        {'\0', 0}};
}
>>>>>>> b9b36b4bb2f6029e917cdef05467074e0dc83984
