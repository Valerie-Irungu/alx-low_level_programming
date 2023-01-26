#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: lists all types of argurments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					print("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					print("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;

			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
