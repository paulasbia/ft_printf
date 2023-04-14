/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adressp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz < pde-souz@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:46:18 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/14 13:46:22 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adressp(unsigned long int n, int fd, long int *ret)
{
	int	digit;

	if (n == 0)
	{
		ft_putstr_fd("(nil)", 1, ret);
	}
	if (n != 0)
	{
		digit = n % 16;
		if (n >= 16)
		{
			ft_adressp(n / 16, fd, ret);
		}
		if (digit <= 9)
		{
			digit = digit + 48;
			ft_putchar_fd(digit, fd, ret);
		}
		else if (digit > 9)
		{
			digit = digit + 87;
			ft_putchar_fd(digit, fd, ret);
		}
	}
}
