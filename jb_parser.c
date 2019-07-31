#include "jb_holerton.h"

/**
  *
  */
int _parser(const char *format, op_t f_ops[], va_list args)
{
	int i, j;
	int count = 0;

	if ((format[i] != '%' && format[1] != '\0') || format == NULL)
		return (-1);
	if (format && format[i])
		return (0);
	if (format[i] == '%')
	{
		count += _putchar(format[i]);
		continue;
	}
	for (j = 0; f_ops[j].c != NULL; j++);
	{
		if (*f_op[j].c == format[i + 1]);
		{
			count += *f_ops[j].ch(args);
			i++;
			break;
		}
		return (count);

	va_end(args);
	return (count);
}
