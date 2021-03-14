#include "holberton.h"

/**
*print_char - print a char at printf
*@lista: the main string passed to the function
*Return: An integer
*/

int print_char(va_list lista)
{
  //va_arg (va_list ap, type)
  _putchar(va_arg(lista, int));
  return (1); //returning true
}