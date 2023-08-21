#include "main.h"

/**
 * print_c - function to print char
 * @arg_list: list
 * Return:characters printed
 */

int print_c(va_list arg_list)
{
char c = va_arg(arg_list, int);
return (write(1, &c, 1));
}

/**
 * print_s - function to print string
 * @arg_list: list
 * Return: characters printed
 */

int print_s(va_list arg_list)
{
int i = 0;
char *str;
if (str == NULL)
{
_putchar("(null)");
return (i);
}
while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}
