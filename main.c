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
    unsigned int ui;
    void *addr;
/*
    printf("-------CHAR CASE percent y n ------\n");
    len = _printf("h_ %% %% jnd%       jjjh hhh\n");
    len2 = printf("ho %% %% jnd%       jjjh hhh\n");
    printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
    printf("-------CHAR CASE percent + null ------\n");
    _printf("h_ %% %% jnd%\0 _printf\n");
    _printf("\n");
    printf("ho %% %% jnd%\0 oprintf\n");
    _printf("\n");
    printf("-------CHAR CASES one percent------\n");
	len = _printf("h_ %% %% jnd%%%%%       h hhh\n");
	len2 = printf("ho %% %% jnd%%%%%       h hhh\n");
    printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
*/
    printf("-------MAIN STARTED------\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length_:[%d, %i]\n", len, len);
    printf("Length2:[%d, %i]\n", len2, len2);
     printf("\n-------NEGATIVE NUMBER------\n");
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
