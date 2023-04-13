/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:10:09 by paula             #+#    #+#             */
/*   Updated: 2023/04/13 15:48:17 by paula            ###   ########.fr       */
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
