#include "holberton.h"

/**
*print_int - It will print integers
*@lista: the main string passed to the function
*Return: An integer
*/
int print_int(va_list vi)
{
  int x, bit, d, o, n, c = 0;
  n = va_arg(vi, int);
  o = n % 10;
  n = n / 10;
  if (o < 0)
  {
    n = -n;
    o = -o;
    _putchar('-');
    c++;
  }
  bit = n;
  d = 1;
  if (bit > 0)
  {
    while ((bit / 10) != 0)
    {
      bit = bit / 10;
      d = d * 10;
    }
    while (d >= 1)
    {
      x = n / d;
      _putchar(x + '0');
      c++;
      n = n % d;
      d = d / 10;
    }
  }
  _putchar(o + '0');
  c++;
  return (c);
}

/**
* print_unsigned - Convert a number into an unsigned int and print it
* @un: The number to be converted
*
* Return: The number of digits printed
*/
int print_unsigned(va_list lista)
{
  unsigned int num, c = 0, div;

  num = va_arg(lista, int);

  if (num == 0)
  {
    _putchar('0');
    c = 1;
  }
  if (num > 0)
  {
    for (div = 1; (num / div) > 9; div *= 10)
      ;
    while (div != 0)
    {
      _putchar((num / div) + '0');
      num %= div;
      div /= 10;
      c++;
    }
  }
  return (c);
}

/**
 * print_octal - Converts a decimal num passed to the argument to an octal
 * num
 * @oct: The num to be converted
 * Return: c of digit in octal num
 */
int print_octal(va_list oct)
{
  unsigned int num, c = 0, index = 0;
  int arr[100];

  num = va_arg(oct, int);
  if (num < 9)
  {
    _putchar(num + '0');
    c = 1;
  }
  else if (num >= 9)
  {
    while (num > 0)
    {
      arr[index] = num % 8;
      num /= 8;
      index++;
    }
  }
  while (index--)
  {
    _putchar(arr[index] + '0');
    c++;
  }
  return (c);
}