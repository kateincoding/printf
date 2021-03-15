#ifndef HOLBERTON_H
#define HOLBERTON_H

#include "f_library/std_library.h"
#include <stdlib.h>
#include <stdarg.h>

#include <unistd.h>

#define INT_MAX 2147483647

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
int putN(unsigned int n, unsigned int b, char *nums);

/* functions from standar library in f_library like putchar and others*/
int _putchar(char c);
int _strlen(char *s);

#endif
