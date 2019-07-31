/**
  *
  */
int (*getFn(const char *format))(va_list list)
{
	op_t f_ops[] = {
		{"c", op_char},
		{"s", op_char_ptr},
		{"i", op_int},
		{"d", op_int},
		{NULL, NULL},
	} ;

	int i, j;

	for (j = 0; f_ops[j].c !
