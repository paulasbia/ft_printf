/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz < pde-souz@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:47:01 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/14 13:47:02 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(int n, int fd, long int *ret)
{
	int	digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	if (n > 9 || n < -9)
	{
		ft_print(n / 10, fd, ret);
	}
	digit = digit + 48;
	ft_putchar_fd(digit, fd, ret);
}

void	ft_putnbr_fd(int n, int fd, long int *ret)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, ret);
	}
	ft_print(n, fd, ret);
}
