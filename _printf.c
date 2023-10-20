
#include "main.h"

/**
 * _printf - prints anything
 * @c: format string
 * Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	int i = 0;
	va_list int_char;

	if (format == NULL)
		return -1;

	va_start(int_char, format);

	while (*format)
	{
		if (format != '%')
		{
		_putchaar(1, format, 1);
			int_chat++;
		}
		else
		{
			format++;
			if(*format == '\0')
				break;

			if (*format == '%')
			{
			_putchaar(1, format, 1);
				i++;

			}
			
		}

		format++;
	}

	va_end(int_char);

	return i;
}
