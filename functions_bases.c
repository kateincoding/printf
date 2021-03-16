#include "holberton.h"

/**
 * print_octal - Converts a decimal num passed to the argument to an octal
 * num
 * @lista: The num to be converted
 * Return: c of digit in octal num
 */
int print_octal(va_list lista)
{
	unsigned int num, c = 0, index = 0;
	int arr[100];

	num = va_arg(lista, int);
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

/**
 *ft_atoi - extract the number to integer
 *@str: string input
 *Return: number int
 */
int ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int digit;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		digit = *str - '0';
		result = result + (digit * sign);
		++str;
	}
	return (result);
}

/**
 * print_hex - Converts decimal to uppercase hexadecimal
 * @n: The number to be converted
 *
 * Return: The number of digits printed
 */
int print_hex(va_list list)
{
	int n;
	n = ft_atoi(va_arg(list, *char));
	char hex_digits[] = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}
