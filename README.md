# 0x11. C - printf

## Overview of the project
The main goal of this project is to replicate the funcionality of printf

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and *-pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, * but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our * own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

## Tasks
### Mandatory

#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings) write output to stdout, the standard output stream format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  - [x] c
  - [x] s
  - [x] %

#### 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
  - [x] d
  - [x] i

#### 2. Just because it's in print doesn't mean it's the gospel
Create a man page for your function.

#### 3. With a face like mine, I do better in print
Handle the following custom conversion specifiers:
  - [x] b: the unsigned int argument is converted to binary
```
alex@ubuntu:~/c/printf$ cat main.c
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```
## File description
### [_printf.c](_printf.c)
* Function that produces output according to a format.
### [function_binary.c](function_binary.c)
* Converts unsigned int argument to binary.
### [functions_number.c](functions_number.c)
This file contains
* int print_int(va_list lista)
* int print_unsigned(va_list lista)
### [functions_bases.c](functions_bases.c)
This file contains
* int print_octal(va_list lista)
* int	print_hexadecimal(unsigned int n)
* int	print_HEXADECIMAL(unsigned int n)
* int print_hex(va_list lista)
* int print_HEX(va_list lista)
### [functions_char.c](functions_char.c)
This file contains
* int print_char(va_list lista)
* int print_str(va_list lista)
* int print_rev_str(va_list lista)
* int print_Str_Ascii(va_list arg)
### [function_rot13.c](function_rot13.c)
Encodes + 13 char
### [_putchar.c](_putchar.c)
This function writes a char to stdout
### [holberton.c](holberton.c)
Contains the function prototypes implemented in the project
### [man_3_printf.c](man_3_printf.c)
Manual of the project

## Authors
[Github - Katherine Soto](https://github.com/kateincoding) |
[Github - Octavio Lafourcade](https://github.com/tavolafourcade)