/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armelkon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:23:08 by armelkon          #+#    #+#             */
/*   Updated: 2026/02/17 17:26:32 by armelkon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specif(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_unsigned_putnbr(va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_hex_lower(va_arg(*ap, unsigned int)));
	if (c == 'X')
		return (ft_hex_upper(va_arg(*ap, unsigned int)));
	if (c == 'p')
		return (ft_adress(va_arg(*ap, void *)));
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_if_percent(const char *form, int *i, va_list *ap)
{
	int	printed;

	printed = ft_specif(form[*i + 1], ap);
	if (printed == -1)
		return (-1);
	*i += 2;
	return (printed);
}

int	ft_parse_format(const char *form, va_list *ap)
{
	int	i;
	int	count;
	int	printed;

	i = 0;
	count = 0;
	while (form[i])
	{
		printed = -1;
		if (form[i] == '%' && form[i + 1])
			printed = ft_if_percent(form, &i, ap);
		if (printed != -1)
		{
			count += printed;
			continue ;
		}
		count += ft_putchar(form[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *form, ...)
{
	va_list	ap;
	int		count;

	if (!form)
		return (-1);
	va_start(ap, form);
	count = ft_parse_format(form, &ap);
	va_end(ap);
	return (count);
}
