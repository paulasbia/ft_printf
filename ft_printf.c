/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:27:43 by paula             #+#    #+#             */
/*   Updated: 2023/04/10 14:50:19 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void replace(char st, va_list ap, long int *ret)
{
    unsigned long int   arg;

    if (st == '%')
        ft_putchar_fd(st, 1, ret);
    if (st == 'c')
        ft_putchar_fd(va_arg(ap, int), 1, ret);
    if (st == 's')
        ft_putstr_fd(va_arg(ap, char*), 1, ret);
    if (st == 'd' || st == 'i')
        ft_putnbr_fd(va_arg(ap, int), 1, ret);
    if (st == 'u')
        ft_putuninbr(va_arg(ap, int), 1, ret);
    if (st == 'x')
        ft_hexanbr_fd(va_arg(ap, int), 1, 1, ret);
    if (st == 'X')
        ft_hexanbr_fd(va_arg(ap, int), 1, 2, ret);
    if (st == 'p')
    {
        arg = va_arg(ap, unsigned long int);
        if (arg != 0)
        {
            ft_putstr_fd("0x", 1, ret);
        }
        ft_adressp(arg, 1, ret);
    }  
}

int ft_printf(const char *st, ...)
{
    long int     ret;
    int     i;
    va_list ap;

    ret = 0;
    i = 0;
    va_start(ap, st);
    while (st[i] != 0)
    {
        if (st[i] == '%')
        {
            replace(st[++i], ap, &ret);
        }
        else
            ret = ret + write(1, &st[i], 1);
        i++;
    }
    va_end(ap);
    return(ret);
}

// int main(void)
// {
//     int ret;
//     int ret2;
//     char    s[] = "ola";
//     int     d = 15;
//     int     p = 17;
    
//     ret = ft_printf("ola %c %% %s %d %u %x %X %p teste final\n", 'a', s, d, 2147483648, -15, d, &p);
//     ret2 = printf("ola %c %% %s %d %u %x %X %p teste final\n", 'a', s, d, (unsigned int)2147483648, -15, d, &p);
//     printf("%d\n", ret);
//     printf("%d\n", ret2);
// }