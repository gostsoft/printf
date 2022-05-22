#include "main.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
    va_list args;
    int n = 0;
    int n_display = 0;

    va_start(args, format);

    while (format[n] != '\0'){
       if (_put_char(format[n]) != -1)
            n_display+= 1;
            
        n++;
    };

    va_end(args);
    return n_display;
}
