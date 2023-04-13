/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:37:37 by paula             #+#    #+#             */
/*   Updated: 2023/04/13 19:50:00 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexanbr_fd(unsigned int n, int fd, int x, long int *ret)
{
	int	digit;

	digit = n % 16;
	if (n >= 16)
	{
		ft_hexanbr_fd(n / 16, fd, x, ret);
	}
	if (digit <= 9)
	{
		digit = digit + 48;
		ft_putchar_fd(digit, fd, ret);
	}
	else if (digit > 9 && x == 1)
	{
		digit = digit + 87;
		ft_putchar_fd(digit, fd, ret);
	}
	else if (digit > 9 && x == 2)
	{
		digit = digit + 55;
		ft_putchar_fd(digit, fd, ret);
	}
}
