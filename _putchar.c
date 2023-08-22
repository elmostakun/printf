#include <unistd.h>

/**
 * _putchar - function to print characters
 * @c: char
 * Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
