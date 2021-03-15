#ifndef HOLBERTON_H
#define HOLBERTON_H

#include "f_library/std_library.h"
#include <stdlib.h>
#include <stdarg.h>

#include <unistd.h>

/**
 * struct Ftype - Struct operator
 *
 * @c: Parameter char (%s, %c, %i, ...)
 * @f: The function associated
 */
typedef struct Ftype
{
	char c;
	void (*f)(va_list);
} ftype;
typedef struct Ftype f_type;

/* main functions */
int _printf(const char *format, ...);
int operator_printf(char s_type, va_list list);
int _putchar(char c);

/* functions from standar library in f_library like putchar and others*/

#endif
