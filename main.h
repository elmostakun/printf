#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int specifier_checker(char spec_form, va_list arg_list);
int print_x(unsigned int n, int base);
int print_xc(unsigned int n, int base);
int print_d(long int n, int base);
int print_c(int c);
int print_s(char *s);

#endif /* MAIN_H*/
