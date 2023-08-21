#include "main.h"
#include <stdarg.h>

/**
 * _printf - User defined printf function
 * @format: pointer to string literal
 * Return: Total caracters printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	/* Here, arg_list variable of type va_list is declared*/

	int char_printed_count;
	/* char_printed_count will store count of character printed*/

	int i;
	/* i will be used as an iterator through content of format (variable)*/

	va_start(arg_list, format);
	/* Here, the arg_list is directed to point to next argument after format*/

	char_printed_count = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	/*checking if format is not null and charact at index i not null*/
	{
		if (format[i] == '%')
			/*check if current value at index i in format variable is %*/
			char_printed_count += specifier_checker(format[++i], arg_list);
			/* if it is %,call this function to check specifier type*/
		else
			char_printed_count += write(1, format, 1);
		/*if current character not %, print it out*/
		/*this process above goes on until nothing is left in format i.e NULL*/
	}

	va_end(arg_list);
	/*Call va_end() function to clean up the call to variadic macros*/

	return (char_printed_count);
	/*return total characters printed*/
}
