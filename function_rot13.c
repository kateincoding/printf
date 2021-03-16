#include "holberton.h"

/**
 * print_rot13 - encodes + 13 char
 * @lista: string to call from args of _printf fx
 * Return: numbers of character printed
 */
int print_rot13(va_list lista)
{
	int i = 0, j = 0, result = 0;
	char source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	s = va_arg(lista, char *);
	if (s == NULL)
		s = "(AHYY)";
	while (s[i])
	{
		for (j = 0; source[j]; j++)
		{
			if (s[i] == source[j])
			{
				write(1, &encode[j], 1);
				result++;
				break;
			}
		}
		if (!source[j])
		{
			write(1, &s[i], 1);
			result++;
		}
		i++;
	}
	return (result);
}
