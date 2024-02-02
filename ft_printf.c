/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:52:18 by emfourni          #+#    #+#             */
/*   Updated: 2024/02/02 16:28:28 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isflag(char c)
{
	if (c == 'c' || c == 's' || c == '%')
		return (1);
	else if (c == 'd' || c == 'i' || c == 'u')
		return (1);
	else if (c == 'x' || c == 'X' || c == 'p')
		return (1);
	return (0);
}

int	ft_flagmanager(const char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'd' || c == 'i')
		return (ft_putsigned(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthexupp(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putadress(va_arg(arg, unsigned long long),
				"0123456789abcdef"));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_isflag(format[i + 1]))
		{
			i++;
			len += ft_flagmanager(format[i], arg);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
