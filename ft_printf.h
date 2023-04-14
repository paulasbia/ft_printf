/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz < pde-souz@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:46:49 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/14 13:46:51 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *st, ...);
void	ft_putchar_fd(char c, int fd, long int *ret);
void	ft_putstr_fd(char *s, int fd, long int *ret);
void	ft_putnbr_fd(int n, int fd, long int *ret);
void	ft_putuninbr(unsigned int n, int fd, long int *ret);
void	ft_hexanbr_fd(unsigned int n, int fd, int x, long int *ret);
void	ft_adressp(unsigned long int n, int fd, long int *ret);

#endif