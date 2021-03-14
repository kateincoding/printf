#ifndef HOLBERTON_H
# define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct Ftype - Struct operator
 *
 * @c: Parameter char (%s, %c, %i, ...)
 * @f: The function associated
 */

typedef struct Ftype
{
	char *c;
	void (*f)(va_list);
} ftype;

typedef struct Ftype f_type;

/* main functions */
int _printf(const char *format, ...);

/*aux fx from library*/
int _putchar(char c);

#endif
