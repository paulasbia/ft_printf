/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuninbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz < pde-souz@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:47:11 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/14 13:47:12 by pde-souz         ###   ########.fr       */
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
