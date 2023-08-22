#include "main.h"

/**
* _printf - User defined printf function
* @format: pointer to string literal
* Return: Total caracters printed
*/

int _printf(const char *format, ...)
{
va_list arg_list;
int char_printed_count, i = 0;

va_start(arg_list, format);
char_printed_count = 0;

if (format == NULL)
return (-1);
while (format[i] != '\0')
/*checking if format is not null and charact at index i not null*/
{
if (format[i] != '%')
{
char_printed_count += _putchar(format[i++]);
}
else
{
char_printed_count += specifier_checker(format[++i], arg_list);
i++;
}
}
va_end(arg_list);

return (char_printed_count);
}
