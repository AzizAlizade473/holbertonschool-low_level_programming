#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: va_list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *sep;
	char *types = "cifs";
	void (*funcs[])(va_list) = {
		print_char, print_int, print_float, print_string
	};

	i = 0;
	sep = "";
	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				printf("%s", sep);
				funcs[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

