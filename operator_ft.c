#include "holberton.h"

/*
en este documento: para avanzar
c 
s
%
d -> otro archivo (3 a 4 fx)
i -> otro archivo (1 fx)
*/
int f_char(va_list list)
{
	char c = va_arg(list, int);
	putchar (c);

    return (1);
}