/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf.c
*/

#include "../../include/my.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void switch_params(const char letter, va_list ap)
{
    switch(letter) {
    case 'i':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'd':
        my_put_nbr(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 'u':
        nbr_unsigned(va_arg(ap, unsigned int));
        break;
    }
}

void switch_params_2(const char letter, va_list ap)
{
    switch(letter) {
    case 'x':
        hexa_base_maj(va_arg(ap, int));
        break;
    case 'X':
        hexa_base(va_arg(ap, int));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'o':
        octal_base(va_arg(ap, int));
        break;
    }
}

void switch_symbol(const char *fmt, va_list ap)
{
    int a = 0;

    while (fmt[a] != '\0') {
        if (fmt[a] == '%') {
            switch_params(fmt[a + 1], ap);
            switch_params_2(fmt[a + 1], ap);
            a++;
        } else {
            my_putchar(fmt[a]);
        }
        a++;
    }
}

void my_printf(const char *fmt, ...)
{
    va_list ap;
    int a = 0;
    
    va_start(ap, fmt);
    if (fmt[a] != '\0') {
        switch_symbol(fmt, ap);
    } else {
        va_end(ap);
    }
}
