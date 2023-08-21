#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int specifier_checker(char spec_form, va_list arg_list);
int print_x(unsigned int n, int base);
int print_xc(unsigned int n, int base);
int print_d(unsigned int n, int base);


#endif /* MAIN_H*/
