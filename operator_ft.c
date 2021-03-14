#include "lib_printf.h"

int f_char(va_list list)
{
	char c = va_arg(list, int);
	putchar (c);

    return (1);
}