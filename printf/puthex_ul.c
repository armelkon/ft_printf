/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_ul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armelkon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:11:50 by armelkon          #+#    #+#             */
/*   Updated: 2026/02/19 14:46:51 by armelkon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthex_ul(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += puthex_ul(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}
