#include "main.h"

/**
 * _printf - User defined printf function
 * @format: pointer to string literal
 * Return: Total caracters printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	int char_printed_count, i;

	va_start(arg_list, format);
	char_printed_count = 0;

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	/*checking if format is not null and charact at index i not null*/
	{
		if (format[i] != '%')
			char_printed_count += write(1, format, 1);
		else
			char_printed_count += specifier_checker(format[++i], arg_list);
	}
	va_end(arg_list);

	return (char_printed_count);
}
