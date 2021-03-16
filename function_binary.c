#include "holberton.h"

/**
* print_binary - Converts unsigned int argument to binary
* @lista: The decimal number to be converted
* Return: Binary number
*/
int print_bin(va_list lista)
{
  unsigned int n, a = 0, i = 0;
  int arr[100];
  n = va_arg(lista, int);
  if (n < 2)
  {
    _putchar(n + '0');
    a = 1;
  }
  else if (n >= 2)
  {
    while (n > 0)
    {
      arr[i] = n % 2;
      n /= 2;
      i++;
    }
  }
  while (i--)
  {
    _putchar(arr[i] + '0');
    a++;
  }
  return (a);
}