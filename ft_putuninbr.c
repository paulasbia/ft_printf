/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuninbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 08:44:28 by paula             #+#    #+#             */
/*   Updated: 2023/04/13 15:48:16 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_uniprint(unsigned int n, int fd, long int *ret)
{
	unsigned int	digit;

	digit = n % 10;
	if (n >= 10)
	{
		ft_uniprint(n / 10, fd, ret);
	}
	digit = digit + 48;
	ft_putchar_fd(digit, fd, ret);
}

void	ft_putuninbr(unsigned int n, int fd, long int *ret)
{
	ft_uniprint(n, fd, ret);
}
