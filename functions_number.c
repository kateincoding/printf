#include "holberton.h"

/**
*print_int - It will print integers
*@lista: the main string passed to the function
*Return: An integer
*/
int print_int(va_list lista)
{
  int n = va_arg(lista, int);
  int count = 0;
  unsigned int num;

  if (n < 0)
  {
    write(1, "-", 1);
    count++;
    num = n * -1;
  }
  else
    num = n;

  count += putN(num, 10, "0123456789");
  return (count);
}

/**
*print_unsigned - print unsigned integers (conversion specifier u)
*@lista: the main string passed to the function
*Return: An integer
*/
int print_unsigned(va_list lista)
{
  unsigned int n = va_arg(lista, unsigned int);
  int count = 0;

  n = (unsigned int)INT_MAX + 1024;

  count += putN(n, 10, "0123456789");
  return (count);
}

/**
*putN - Put numbers with recursion as chars
*@n: the main string passed to the function
*@b: the main string passed to the function
*@nums: the main string passed to the function
*Return: An integer
*/
int putN(unsigned int n, unsigned int b, char *nums)
{
  int r = 1;

  if (n >= b)
    r += putN(n / b, b, nums);

  write(1, &nums[n % b], 1);
  return (r);
}
