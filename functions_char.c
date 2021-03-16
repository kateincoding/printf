#include "holberton.h"

/**
*print_char - print a char at printf
*@lista: the main string passed to the function
*Return: An integer
*/
int print_char(va_list lista)
{
  /*va_arg (va_list ap, type)*/
  _putchar(va_arg(lista, int));
  return (1);
  /* returning true */
}

/**
*print_str - print a char at printf
*@lista: the main string passed to the function
*Return: An integer
*/
int print_str(va_list lista)
{
  unsigned int count = 0;
  /*Can´t be negative*/

	char *str = va_arg(lista, char *);
	int i = 0;

  if (str == NULL)
    str = "(null)";
	
  if (str == '\0')
  {
    _putchar('\0');
    return (1);
  }

  while (str[i])
	{
		_putchar(str[i++]);
		count++;
	}
    return (count);
}

/**
*print_percent - print a char at printf
*@lista: the main string passed to the function
*Return: An integer
*
*/
int print_percent(__attribute__((unused)) va_list lista)
{
  write(1, "%%", 1);
  return (1);
}
