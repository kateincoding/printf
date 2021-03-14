#include "holberton.h"

/**
*print_int - It will print integers
*@lista: the main string passed to the function
*Return: An integer
*/
int print_int(va_list lista)
{
  int i = va_arg(lista, int);
  int count = 0;
  int num;

  if (i < 0)
  {
    write(1, "-", 1);
    count++;
    num = i * -1;
  }
  else
    num = i;

  count += num;
  return (count);
}