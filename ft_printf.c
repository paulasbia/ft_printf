/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:27:43 by paula             #+#    #+#             */
/*   Updated: 2023/03/30 11:07:44 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void replace(char st, va_list ap)
{
    if (st == '%')
    {
        putchar('%');
    }
    if (st == 's')
    {
        puts(va_arg(ap, char*));
    }
}

int ft_printf(const char *st, ...)
{
    int     ret;
    int     i;
    va_list ap;

    ret = 0;
    i = 0;
    va_start(ap, st);
    while (st[i] != 0)
    {
        if (st[i] == '%')
        {
            replace(st[++i], ap);
        }
        else
            write(1, &st[i], 1);
        i++;
    }
    va_end(ap);
    return(ret);
}

int main(void)
{
    ft_printf("ola %s %s \n", "mundo", "bonito");
}