#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints values based on the format specified
 * @format: format specifier for the values
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str_arg;
	char char_arg;
	int int_arg;
	float float_arg;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char_arg = va_arg(args, int);
			printf("%c", char_arg);
		}
		else if (format[i] == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d", int_arg);
		}
		else if (format[i] == 'f')
		{
			float_arg = (float) va_arg(args, double);
			printf("%f", float_arg);
		}
		else if (format[i] == 's')
		{
			str_arg = va_arg(args, char *);
			if (str_arg == NULL)
				printf("(nil)");

