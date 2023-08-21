#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

int _printf(const char *format, ...);
int specifier_checker(char spec_form, va_list arg_list);
int print_x(unsigned int n, int base);
int print_xc(unsigned int n, int base);
int print_d(int n, int base);
int print_c(char c);
int print_s(char *s);
int _putchar(char c);

#endif /* MAIN_H*/
