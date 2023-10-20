
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
			else if(*format == 'c')
			{
				char c = va_arg(int_char, int);
				_putchaar(1, &c, 1);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(int_char, char*)
				int str_len = 0;
				
				while (str[str_len] != '\0')
					str_len++;
				
				_putts(1, str, str_len);
				i += str_len;
			}
		}

		format++;
	}

	va_end(int_char);

	return i;
}
