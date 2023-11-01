#include <stdarg.h>
#include <stdio.h>

void mini_printf(const char *format, ...)
{
	va_list	args; // va_list variable to manage the variable arguments

	va_start(args, format); // init the va_list 'args' to start at the argument after 'format'

	while (*format) // looping through the string
	{
		if (*format =='%') // if a format specifier is encountered
		{
			format++; // increment format to the next char in string
			if (*format == 'd') // check if the char is 'd' (for integers)
			{
				printf("%d", va_arg(args, int)); // fecth the next arg as an integer and print it
			}
			else if (*format == 's') // check if the char is 's' (for strings)
			{
				printf("%s", va_arg(args, char *)); // fetch the next arg as a string and print it
			} 
		}
		else
		{
			putchar(*format); // print regular characters
		}
		format++; // move to the next character
	}
	va_end(args); // cleanup the va_list arguments after processing
}

int	main(void)
{
	mini_printf("Hello %s, number is %d\n", "World", 42);
	return(0);
}