/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:56:07 by elharuty          #+#    #+#             */
/*   Updated: 2023/03/14 19:20:34 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	check(char c, va_list a)
{
	int	i;

	i = 0;
	if (c == '%')
		i = printchar('%');
	else if (c == 'c')
		i = printchar(va_arg(a, int));
	else if (c == 's')
		i = printstr(va_arg(a, char *));
	else if (c == 'd' || c == 'i')
		i = printnum(va_arg(a, int));
	else if (c == 'p')
		i = pointer(va_arg(a, unsigned long long));
	else if (c == 'u')
		i = unsigned_printnum(va_arg(a, unsigned int));
	else if (c == 'x')
		i = hex(va_arg(a, unsigned int));
	else if (c == 'X')
		i = hex_upper(va_arg(a, unsigned int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	va_start (arg, str);
	while (str && str[i] && i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			len += check(str[i + 1], arg);
			i++;
		}
		else
			len += printchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
