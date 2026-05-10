/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armelkon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:21:20 by armelkon          #+#    #+#             */
/*   Updated: 2026/02/19 16:36:29 by armelkon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *form, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	putnbr_rec(long nb);
int	ft_putnbr(int n);
int	putun_rec(unsigned long nb);
int	ft_unsigned_putnbr(unsigned int n);
int	puthex_ul(unsigned long n, const char *base);
int	ft_hex_lower(unsigned int n);
int	ft_hex_upper(unsigned int n);
int	ft_adress(void *p);

#endif
