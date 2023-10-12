#include "variadic_functions.h"

/**
* print_char - a function that Prints a char
* @arg: argument
* Return: void
*/
void print_char(va_list arg)
{
char ch;

ch = va_arg(arg, int);

printf("%c", ch);
}

/**
* print_int - a function that prints an integer
* @arg: argument
* Return: void
*/
void print_int(va_list arg)
{
int num;

num = va_arg(arg, int);

printf("%d", num);
}


/**
* print_float - a function that prints a float
* @arg: float
* Return: void
*/
void print_float(va_list arg)
{
float f;

f = va_arg(arg, double);

printf("%f", f);
}



/**
* print_string - a function that prints a string
* @arg: arguments
* Return: void
*/
void print_string(va_list arg)
{
char *str;

str = va_arg(arg, char *);

if (str == NULL)
{
printf("(nil)");
return;
}

printf("%s", str);
}


/**
* print_all - a function that prints anything
* @format: format input
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list list;

int i = 0, j = 0;

char *separator = "";

printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(list, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(list);
separator = ", ";
}

i++;

}

printf("\n");

va_end(list);
}


