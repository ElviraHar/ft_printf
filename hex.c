/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:43:39 by elharuty          #+#    #+#             */
/*   Updated: 2023/03/14 19:20:26 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_upper(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i = hex_upper(n / 16);
	i++;
	printchar("0123456789ABCDEF"[n % 16]);
	return (i);
}

int	hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i = hex(n / 16);
	i++;
	printchar("0123456789abcdef"[n % 16]);
	return (i);
}

int	p(unsigned long long po)
{
	int	i;

	i = 0;
	if (po >= 16)
		i = p(po / 16);
	i++;
	printchar("0123456789abcdef"[po % 16]);
	return (i);
}

int	pointer(unsigned long long point)
{
	int	i;

	i = printstr("0x");
	i += p(point);
	return (i);
}
