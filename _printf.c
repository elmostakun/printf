#include "main.h"

/**
 * _printf - User defined printf function
 * @format: pointer to string literal
 * Return: Total caracters printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;

	int i = 0;
	int char_printed_count = 0;

	va_start(arg_list, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			char_printed_count += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] != '\0')
				return (-1);
			char_printed_count += specifier_checker(format[i], arg_list);
		}
		i++;
	}

	va_end(arg_list);

	return (char_printed_count);
}
