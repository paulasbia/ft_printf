/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz < pde-souz@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:47:06 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/14 13:47:08 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, long int *ret)
{
	if (s == 0)
	{
		ft_putstr_fd("(null)", fd, ret);
		return ;
	}
	while (*s)
		ft_putchar_fd(*s++, fd, ret);
}
