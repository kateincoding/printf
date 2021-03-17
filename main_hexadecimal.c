#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len1 = 0, len2 = 0;

    len1 = _printf("%S\n", "Holberton\nSchool");
    len2 = printf("%s\n", "Holberton\nSchool");
    printf("len_ = %d, len2 = %d \n", len1, len2);

    len1 = _printf("%S\n", NULL);
    len2 = printf("%s\n", NULL);
    printf("len_ = %d, len2 = %d \n", len1, len2);

    len1 = _printf("%S\n", "Holberton1School");
    len2 = printf("%s\n", "Holberton1School");
    printf("len_ = %d, len2 = %d \n", len1, len2);
    return (0);
}
