/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adressp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:38:45 by paula             #+#    #+#             */
/*   Updated: 2023/04/10 14:48:42 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_adressp(unsigned long int n, int fd, long int *ret)
{
    int digit;

    if (n == 0)
    {
        ft_putstr_fd("(nil)", 1, ret);
    }
    if (n != 0)
    {
        digit = n % 16;
        if(n >= 16)
        {
            ft_adressp(n/16, fd, ret);
        }
        if(digit <= 9)
        {
            digit = digit + 48;
            ft_putchar_fd(digit, fd, ret);
        }
        else if(digit > 9)
        {
            digit = digit + 87;
            ft_putchar_fd(digit, fd, ret);
        }
    }
}
