#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* #define INT_MAX 2147483647 */

/**
 * struct Ftype - Struct operator
 *
 * @c: Parameter char (%s, %c, %i, ...)
 * @f: The function associated
 */
typedef struct Ftype
{
	char c;
	int (*f)(va_list);
} ftype;
typedef struct Ftype f_type;

/* main functions */
int _printf(const char *format, ...);
int operator_printf(char s_type, va_list list);

/* print functions : type char */
int print_char(va_list lista);
int print_str(va_list lista);
/* int print_percent(va_list lista); */

/* print functions : type numbers */
int putN(unsigned int n, unsigned int b, char *nums);
int print_int(va_list lista);
int print_unsigned(va_list lista);

/* functions from standar library in f_library like putchar and others*/
int _putchar(char c);
int _strlen(char *s);

#endif
