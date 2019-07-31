#include "jb_holberton.h"

/**
 *
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	op_t f_ops[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{NULL, NULL}
	};

	va_start(args, format);

	count += _parser(va_list args);

	va_end (args);
	return (count);
	}
}
