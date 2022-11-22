#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include<stddef.h>
#include<stdio.h>
/**
 * struct code_format - contains specifier and function pointer
 *
 * @code_f - typedef for struct code_format
 * @specifier: the specifires (s,c,d,i,ui,..)
 * @f: the function that is related to the specifier
 *
 */
typedef struct code_format
{
	char *specifier;
	int (*f)(va_list);
} code_f;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list chars);
int print_numbers(va_list d);
int print_unsigned(va_list u);
int print_binary(va_list b);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_special_string(va_list str);
int print_hexadecimal(unsigned int number, unsigned int checker);
int (*function_finder(const char *format))(va_list);

#endif
