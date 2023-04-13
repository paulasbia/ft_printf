/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:41:39 by paula             #+#    #+#             */
/*   Updated: 2023/04/13 15:50:44 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int     ft_printf(const char *, ...);
void    ft_putchar_fd(char c, int fd, long int *ret);
void    ft_putstr_fd(char *s, int fd, long int *ret);
void    ft_putnbr_fd(int n, int fd, long int *ret);
void    ft_putuninbr(unsigned int n, int fd, long int *ret);
void    ft_hexanbr_fd(unsigned int n, int fd, int x, long int *ret);
void    ft_adressp(unsigned long int n, int fd, long int *ret);

#endif