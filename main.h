#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int specifier_checker(char specifier, va_list arg_list);
int print_x(unsigned int n, int base);

#endif /* MAIN_H*/
