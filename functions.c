#include "main.h"
#include <stdarg.h>

/**
 * print_c - function to print char
 * @arg_list:
 * Return:
 */

int print_c(va_list arg_list)
{
char c = va_arg(arg_list, int);
return (write(1, &c, 1));
}

/**
 * print_s - function to print string
 * @arg_list
 * Return:
 */

int print_s(va_list arg_list)
{
int i = 0;
char *str;
if (str == NULL)
{
putchar("(null)");
return (i);
}
while (str[i])
{
putchar(str[i]);
i++;
}
return (i);
}
/**
 * specifier_checker - 
 * @specifier: 
 * Return: count
 */

int specifier_checker(const char specifier, va_list arg_list)
{
int char_printed_count = 0;

if (specifier == 'c')
{
char_printed_count += print_c(arg_list);
}
else if (specifier == 's')
{
char_printed_count += print_s(arg_list);
}
else if (specifier == '%')
{
putchar('%');
}
}
