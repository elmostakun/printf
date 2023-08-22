#include "main.h"

/**
 * specifier_checker - This find match for what's after %
 * could be s as in %s, could be c as in %c etc
 * @spec_form: the character after % to find match for
 * @arg_list: a list of the variable arguments
 * Return: counts of printed characters
 */

int specifier_checker(char spec_form, va_list arg_list)
{
	int char_len;

	char_len = 0;

	if (spec_form == 'c')
		char_len += print_c(va_arg(arg_list, int));
	else if (spec_form == 's')
		char_len += print_s(va_arg(arg_list, char *));
	else if (spec_form == 'd' || spec_form == 'i')
		char_len += print_d(va_arg(arg_list, int), 10);
	else if (spec_form == 'r')
		char_len += print_rev(va_arg(arg_list, char *));
	else if (spec_form == 'x')
		char_len += print_x(va_arg(arg_list, unsigned int), 16);
	else if (spec_form == 'b')
		char_len += print_b(va_arg(arg_list, unsigned int), 2);
	else if (spec_form == 'o')
		char_len += print_o(va_arg(arg_list, unsigned int), 8);
	else if (spec_form == 'X')
		char_len += print_xc(va_arg(arg_list, unsigned int), 16);
	else
		char_len += write(1, &spec_form, 1);

	return (char_len);
}
