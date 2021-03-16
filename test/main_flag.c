#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    printf("-------MAIN STARTED------\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length_:[%d, %i]\n", len, len);
    printf("Length2:[%d, %i]\n", len2, len2);
    printf("\n-------CHARACTER------\n");
    _printf("Char-acter:[%-8c][%-8d]\n", 'H', 2);
    printf("Char#####acter:[%-8c][%.2u]\n", 'H', 3.567);
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    printf("\n-------PERCENT------\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    printf("\n-------REVERSE STRING------\n");
	len = _printf("Unknown_:[%r]\n", "\nhO&L$Ac\n");
    _printf("Len:[%d]\n", len);
    len = _printf("Len:[%d]\n", len);
    _printf("Len:[%d]\n", len);
	len = _printf("Unknown_:[%r]\n");
    _printf("Len:[%d]\n", len);
	len = _printf("Unknown_:[%r]\n", NULL);
    _printf("Len:[%d]\n", len);

    printf("\n-------ROT13------\n");
    _printf("Unknown:[%R]\n", "ABCDabcdA");
    printf("Unknown:[%R]\n", "ABCDabcdA");
    return (0);
}
