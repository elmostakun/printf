#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int print_b(unsigned int d, unsigned int base);
int print_o(unsigned int d, unsigned int base);
int _printf(const char *format, ...);
int specifier_checker(char spec_form, va_list arg_list);
int print_x(unsigned int n, unsigned int base);
int print_xc(unsigned int n, unsigned int base);
int print_d(int n, int base);
int print_c(int c);
int print_s(char *s);
int _putchar(char c);

#endif /* MAIN_H*/
