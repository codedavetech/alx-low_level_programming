#ifndef _VARIADIC_H_
#define _VARIADIC_H_
/**
 * struct printer - A new struct type defining a print.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to function that print a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print) (va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
