void print_all(const char * const format, ...)
{
	unsigned int i;
	char * sep;
	va_list arg;

	va_start(arg, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
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

	va_end(arg);
	printf("\n");
}
